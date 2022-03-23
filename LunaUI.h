
bool m_iDirectX = true;

bool m_iVisualEsp = false;


// DirectX //
bool  Wireframe = false;
bool GhostEsp = false;
bool RealWallhack = false;
bool RealChams = false;
int fov = 90;
int ModeValue = 120;
bool m_iFovStart = false;
bool GodMode = false;
bool m_iRecoil50 = false;
bool m_iRecoil100 = false;
bool m_iFastAttack = false;

bool m_iFastWeaponChange = false;
bool m_iAmmo = false;
bool m_iCrossHair = false;

// Esp Box //
bool EspBox = false;
bool EspName = false;
bool EspLine = false;
bool GlowEsp = false;


bool NameEsp = false;
int nameespall = 0x00F449AC;

// dw //

bool dwWallhack = false;
bool dwRedEsp = false;
bool dwHealthEsp = false;
bool dwGmWallhack = false;
bool dwWhiteEsp = false;

bool dwFastWeapon = false;

bool dwRecoil = false;

bool dwFastShot = false;

bool dwInfAmmo = false;
// dw //



namespace MainThreads {

	namespace Utils {
		inline void DisabledInput() {
			//ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
			ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
		}

		inline void EndDisabledInput() {
			//ImGui::PopItemFlag();
			ImGui::PopStyleVar();
		}

		inline void SeparatorWithPadding(ImVec2 padding) {
			ImGui::Dummy(padding);
			ImGui::Separator();
			ImGui::Dummy(padding);
		}

		inline void AimbotWindow() {

			//ImGui::Checkbox("+ Name Esp", &NameEsp);

			ImGui::Checkbox("+ Wallhack", &RealWallhack);

			ImGui::Checkbox("+ Wireframe", &Wireframe);

			ImGui::Checkbox("+ Ghost Esp", &GhostEsp);

			ImGui::Checkbox("+ Chams ", &RealChams);
			if (RealChams)
			{
				ImGui::ColorEdit3(("Chams"), Colors::boxColor);
				//ImGui::SameLine();
			}
		}

		inline void ESPWindow() {

			ImGui::Checkbox("+ No Recoil %100", &m_iRecoil100);

			ImGui::Checkbox("+ No Recoil %50", &m_iRecoil50);

			ImGui::Checkbox("+ inf Ammo", &m_iAmmo);

			ImGui::Checkbox("+ Weapon Change", &m_iFastWeaponChange);

			//ImGui::Checkbox("+ CrossHair", &m_iCrossHair);

			ImGui::Checkbox("+ God Active", &GodMode);

			ImGui::Checkbox("+ Fov Active", &m_iFovStart);

			ImGui::SliderInt("+ God Mode", &ModeValue, -180, 180);

			ImGui::SliderInt("+ Fov Changer", &fov, -120, 120);

		}

		inline void VisualEsp() {
			ImGui::Checkbox("+ Red Name", &dwRedEsp);

			ImGui::Checkbox("+ Health Esp", &dwHealthEsp);

			ImGui::Checkbox("+ White Esp", &dwWhiteEsp);

			ImGui::Checkbox("+ Wallhack", &dwWallhack);

			ImGui::Checkbox("+ GM Wallhack", &dwGmWallhack);

			ImGui::Checkbox("+ Line Esp", &dwInfAmmo);
		}


		inline void OtherSettings() {
			ImGui::Checkbox("+ Recoil %100", &dwRecoil);

			ImGui::Checkbox("+ Fast Shot", &dwFastShot);

			ImGui::Checkbox("+ Fast Weapon", &dwFastWeapon);

			ImGui::Checkbox("+ Fov Active", &m_iFovStart);

			ImGui::SliderInt("+ Fov Changer", &fov, -120, 120);
		}
	}
}
