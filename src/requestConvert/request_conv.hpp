#pragma once

#include <string>

namespace request_convert
{
	web::http::http_response send_post(std::wstring url, std::wstring path, std::wstring data, int timeout=30);
	web::http::http_response send_post(std::wstring url, std::string path, std::string data, int timeout=30);
	web::http::http_response send_msgpack_post(std::wstring url, std::wstring path, std::string msgpack);
	web::http::http_response send_msgpack_post(std::wstring url, std::wstring path, std::string_view msgpack);

	std::string_view parse_request_pack(const std::string& data);
	bool live_bypass_pack(std::string pack, std::vector<uint8_t>* new_buffer);
	bool live_unlock_dress(std::string pack, std::vector<uint8_t>* new_buffer);
}
