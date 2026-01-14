#include "ShpereController.h"

#include <UniDx/Input.h>


using namespace DirectX;
using namespace UniDx;


void ShpereController::Update()
{
    const float angleSpeed = 90.0f;

    // WASD‚É‚æ‚Á‚Ä‰ñ“]‚·‚éQuaternion‚ðì‚é
    Quaternion rot;
    if (Input::GetKey(Keyboard::A))
    {
        rot = rot * Quaternion::AngleAxis(-angleSpeed * Time::deltaTime, Vector3::up);
    }
    if (Input::GetKey(Keyboard::D))
    {
        rot = rot * Quaternion::AngleAxis(angleSpeed * Time::deltaTime, Vector3::up);
    }
    if (Input::GetKey(Keyboard::W))
    {
        rot = rot * Quaternion::AngleAxis(-angleSpeed * Time::deltaTime, Vector3::right);
    }
    if (Input::GetKey(Keyboard::S))
    {
        rot = rot * Quaternion::AngleAxis(angleSpeed * Time::deltaTime, Vector3::right);
    }

    // ƒ[ƒJƒ‹‚Ì•ûŒüQuaternion‚ÉæŽZ‚·‚é
    transform->localRotation = rot * transform->localRotation;
}
