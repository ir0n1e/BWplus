

class CfgGroups {
	class West {
		class Bundeswehr {
			name = "Bundeswehr";
			class SpecOps_Fleck {
				name = "SpecOps Fleck";
				class BWplusRecon {
					faction = "BWA3_Faction";
					name = "Fernspäher";
					side = 1;
					class Unit0 {
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BWplus_Recon_TL_Flecktarn";
					};
					class Unit1 {
						position[] = {5, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Spotter_Flecktarn";
					};
					class Unit2 {
						position[] = {10, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_Pioneer_Flecktarn";
					};
					class Unit3 {
						position[] = {15, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_CombatLifeSaver_Flecktarn";
					};
					class Unit4 {
						position[] = {20, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Marksman_Flecktarn";
					};
					class Unit5 {
						position[] = {25, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Radioman_Flecktarn";
					};
				};
			};
			class SpecOps_Tropen {
				name = "SpecOps Tropen";
				class BWplusRecon {
					faction = "BWA3_Faction";
					name = "Fernspäher";
					side = 1;
					scopeCurator = 2;
					class Unit0 {
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BWplus_Recon_TL_Tropentarn";
					};
					class Unit1 {
						position[] = {5, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Spotter_Tropentarn";
					};

					class Unit2 {
						position[] = {10, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_Pioneer_Tropentarn";
					};
					class Unit3 {
						position[] = {15, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_CombatLifeSaver_Tropentarn";
					};
					class Unit4 {
						position[] = {20, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Marksman_Tropentarn";
					};
					class Unit5 {
						position[] = {25, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Radioman_Tropentarn";
					};
				};
			};
			class Motorized {
				name = "Motorized Troops";
				class BWplus_Motorized_Fleck {
					name = "Motorized Fleck";
					side = 1;
					faction = "BWA3_Faction";
					class Unit0 {
						side = 1;
						vehicle = "BWA3_TL_Fleck";
						rank = "LIEUTENANT";
						position[] = {0, 5, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Fennek_Flecktarn_mg";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "BWA3_RiflemanAT_Pzf3_Fleck";
						rank = "CORPORAL";
						position[] = {5, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "BWA3_Grenadier_Fleck";
						rank = "CORPORAL";
						position[] = {7, 0, 0};
					};
				};
				class BWplus_Motorized_Tropen {
					name = "Motorized Tropen";
					side = 1;
					faction = "BWA3_Faction";
					scopeCurator = 2;
					class Unit0 {
						side = 1;
						vehicle = "BWA3_TL_Tropen";
						rank = "LIEUTENANT";
						position[] = {0, 5, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Fennek_Tropen_mg";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "BWA3_RiflemanAT_Pzf3_Tropen";
						rank = "CORPORAL";
						position[] = {5, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "BWA3_Grenadier_Tropen";
						rank = "CORPORAL";
						position[] = {7, 0, 0};
					};
				};	
			};
		};
	};
};