class ItemInfo: ItemInfo
{
	mass = 40;
	class HitpointsProtectionInfo
	{
		class Chest
		{
			hitpointName = "HitChest";
			armor = 20; // original = 28
			passThrough = 0.2;
		};
		class Diaphragm
		{
			hitpointName = "HitDiaphragm";
			armor = 20;
			passThrough = 0.2;
		};
		class Abdomen
		{
			hitpointName = "HitAbdomen";
			armor = 20;
			passThrough = 0.4;
		};
		class Body
		{
			hitpointName = "HitBody";
			passThrough = 0.4;
		};
	};
};