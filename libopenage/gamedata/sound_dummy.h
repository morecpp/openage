// Copyright 2013-2021 the openage authors. See copying.md for legal info.

// Warning: this file is a dummy file and was auto-generated by the v0.4.1 converter;
// its purpose is to keep the deprecated gamestate compilable and intact;
// these files keep only the minimum functionality and should not be changed;
// For details, see buildsystem/codegen.cmake and openage/codegen.

#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include "util/csv.h"



namespace openage {
namespace gamedata {

/**
 * one possible file for a sound.
 */
struct sound_item {
	std::string filename;
	int32_t resource_id;
	int16_t probablilty;
	int16_t civilization_id;
	int16_t icon_set;
	static constexpr size_t member_count = 5;
	int fill(const std::string &line);
	bool recurse(const openage::util::CSVCollection &storage, const std::string &basedir);

};

/**
 * describes a sound, consisting of several sound items.
 */
struct sound {
	int16_t sound_id;
	int16_t play_delay;
	int32_t cache_time;
	openage::util::csv_subdata<openage::gamedata::sound_item> sound_items;
	static constexpr size_t member_count = 4;
	int fill(const std::string &line);
	bool recurse(const openage::util::CSVCollection &storage, const std::string &basedir);

};

} // gamedata
} // openage