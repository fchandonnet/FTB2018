#pragma once
#include "pugixml.hpp"
#include <string.h>
#include <assert.h>
#include <list>
#include "Playlist.h"
#include "..\Visualizer\SoundInfo.h"


class DataDeposit
{
public:
	DataDeposit(void);
	~DataDeposit(void);
	vector<Playlist*> LoadCollection();
	Playlist* LoadDirectory();
	void SaveConfig(Playlist* directory, vector<Playlist*> playlists);
private :
	static const std::string CONFIG_PATH;
	std::vector<Playlist*> playlists; //Repr�sente toutes les playlists
	Playlist* directory; //repr�sente la bilioth�que
	string directoryPath;
	bool toDelete;
};

