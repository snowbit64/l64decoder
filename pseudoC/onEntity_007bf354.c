// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 007bf354
// Size: 204 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* ScriptingPhysicsReport::onEntity(unsigned int, int, btCollisionObject const*, bool) */

undefined8
ScriptingPhysicsReport::onEntity(uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  Bt2ScenegraphPhysicsContext *this;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  uVar2 = (ulong)param_1;
  if (param_2 != -1) {
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    uVar8 = Bt2ScenegraphPhysicsContext::getDistancePointCloudShape
                      (this,(Matrix4x4 *)(uVar2 + 0x48),(Vector3 *)(uVar2 + 0xb8),4,
                       (btCollisionObject *)(ulong)param_4,(Vector3 *)0x0,(Vector3 *)0x0);
    lVar3 = *(long *)(uVar2 + 0x110);
    lVar5 = *(long *)(uVar2 + 0x118) - lVar3 >> 2;
    uVar7 = lVar5 * -0x5555555555555555;
    uVar6 = (ulong)((int)uVar7 + 1);
    uVar1 = uVar6 + lVar5 * 0x5555555555555555;
    if (uVar6 < uVar7 || uVar1 == 0) {
      if (uVar6 < uVar7) {
        *(ulong *)(uVar2 + 0x118) = lVar3 + uVar6 * 0xc;
      }
    }
    else {
      std::__ndk1::
      vector<ScriptingPhysicsReport::CollisionData,std::__ndk1::allocator<ScriptingPhysicsReport::CollisionData>>
      ::__append((vector<ScriptingPhysicsReport::CollisionData,std::__ndk1::allocator<ScriptingPhysicsReport::CollisionData>>
                  *)(long *)(uVar2 + 0x110),uVar1);
      lVar3 = *(long *)(uVar2 + 0x110);
    }
    puVar4 = (undefined4 *)(lVar3 + (uVar7 & 0xffffffff) * 0xc);
    puVar4[1] = param_2;
    puVar4[2] = (int)param_3;
    *puVar4 = uVar8;
  }
  return 1;
}


