#pragma once

namespace Components
{
	class AntiLag : public Component
	{
	public:
		AntiLag();

		static void __cdecl FireWeapon(Game::gentity_s* ent, int gameTime, int a3);
		static void __cdecl FireWeaponMelee(Game::gentity_s* ent, int gameTime);
		static bool ShouldRun(uintptr_t stack, uintptr_t returnAddress, Game::gentity_s*& attacker);
		static void __cdecl G_AntiLagRewindClientPos(int gameTime, Game::AntilagClientStore* antilagStore);
		static void __cdecl G_AntiLag_RestoreClientPos(Game::AntilagClientStore* antilagStore);

		static Dvar::Var G_AntiLag, G_AntiLagDebug;
		static bool AntiLagFilled;
	};
}
