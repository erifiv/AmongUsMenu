#pragma once
#include <vector>
#include <string>

struct KLASS {
	std::string namespaze;
	std::string klass_name;

	size_t contains_type(std::string type_input) {
		size_t position;

		if ((position = type_input.find(klass_name, 0)) != std::string::npos)
			return klass_name.length();

		return 0;
	}

	friend bool operator==(const KLASS& lhs, const KLASS& rhs) {
		return (lhs.namespaze.compare(rhs.namespaze) == 0 && lhs.klass_name.compare(rhs.klass_name) == 0);
	}
};

struct KLASS_PAIR {
	KLASS deobfuscated_klass;
	KLASS obfuscated_klass;
};

const std::vector<KLASS_PAIR> KLASS_TRANSLATIONS = {
	{ {"", "Constants"}, {"", "LCICMAADEJB"}},
	{ {"", "FollowerCamera"}, {"", "KGIKNCBGPFJ"} },
	{ {"", "GameData.PlayerInfo"}, {"", "GameData.IFJNDHFKBFK"} },
	{ {"", "GameData.TaskInfo"}, {"", "GameData.BACMONGLLHD"} },
	{ {"", "GameOptionsData"}, {"", "LGPINNLAEAA"} },
	{ {"", "Palette"}, {"", "LOCPGOACAJF"} },
	{ {"", "SaveManager"}, {"", "BLNCMNNEPBE"} },
	{ {"", "StatsManager"}, {"", "FBJMNJEDKGA"} },
	{ {"", "SystemTypes"}, {"", "JDFEKMMMHLC"} },
};

const std::vector<std::pair<std::string, std::string>> METHOD_TRANSLATIONS = {
	{ "get_BanMinutesLeft", "JNOLJAFKBLF" },
	{ "get_AmBanned", "OLMBLLGFFLG" },
	{ "get_BanPoints", "JCKNGJOAEDC" }, //JNFMODLMPAI
	{ "Deserialize", "PGINOBHNJBM" },
	{ "EnterVent", "MNKLCCBMJKL" }, //PKLFLGOCHKM
	{ "ExitVent", "FDGGCIDNIFP" }, // GBNKBLBDEHC
	{ "ReportDeadBody", "DAGCLCNMKJG" },
	{ "ShouldFlipSkeld", "JKGNKFEFJFN"}, // MJLLICLLGJC
	{ "set_BodyColor", "IDBMEHOCPMG"},
	{ "get_BodyColor", "BIFFKCKNKHP"}
};