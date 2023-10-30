class NatoBase {
    side = SIDE_BLUFOR;
    infantryClasses[] = {"B_Soldier_F"};
	
	class agents
	{
		// class Leaning
		// {
		// 	numberOfAgents = -1;
		// 	dynamicSim = ON;
		// 	positions = "Leaning AI";
		// };
		class sitting
		{
			
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Sitting AI";
			class AmbientAnim
			{
				class animationSet
				{
					snapToAnimations[] = {"SIT_CHAIR_RELAXED"};
				
					snapToRange = 2;
				};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
			
		};   
		class standing
		{
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Standing AI";
			class AmbientAnim
			{
				
				animationSet[] = {"STAND_ARMED_1","STAND_ARMED_2"};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};
		class lying
		{
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Lying";
			class AmbientAnim
			{
				
				animationSet[] = {"PRONE_INJURED_UNARMED_1"};

				equipmentLevel = "";

				exitOnCombat = OFF;

			};
		};
		class kneelingFix
		{
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Kneeling fixing";
			class AmbientAnim
			{
				
				animationSet[] = {"REPAIR_VEH_KNEEL"};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};
		class sittingUnarmed
		{
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Sitting Unarmed";
			class AmbientAnim
			{
				
				animationSet[] = {"SIT_CHAIR_UNARMED_2"};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};
		class sittingChowHall
		{
			numberOfAgents = -1;
			dynamicSim = ON;
			positions = "Sitting chow hall";
			class AmbientAnim
			{
				
				animationSet[] = {"SIT_AT_TABLE"};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};
	};
};

