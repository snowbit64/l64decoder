// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementApplyForce
// Entry Point: 0070c2f0
// Size: 348 bytes
// Signature: undefined __cdecl movementApplyForce(Vector2 param_1, FORCE_TYPE param_2)


/* AnimalLocomotionSystem::movementApplyForce(Vector2, AnimalLocomotionSystem::FORCE_TYPE) */

void AnimalLocomotionSystem::movementApplyForce
               (float param_1,float param_2,long param_3,int param_4)

{
  long lVar1;
  char cVar2;
  DeferredDebugRenderer *this;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  float afStack_48 [4];
  long local_38;
  
  cVar2 = s_debugRenderingEnabled;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x444);
  *(undefined8 *)(param_3 + 0x444) =
       CONCAT44(param_2 + (float)((ulong)uVar5 >> 0x20),param_1 + (float)uVar5);
  if (cVar2 == '\0') goto LAB_0070c424;
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  Vector4::set((Vector4 *)afStack_48,1.0,0.0,1.0,1.0);
  if (param_4 == 2) {
    fVar3 = 1.0;
LAB_0070c3a8:
    fVar4 = 1.0;
LAB_0070c3b0:
    Vector4::set((Vector4 *)afStack_48,fVar3,fVar4,0.0,1.0);
  }
  else {
    if (param_4 == 1) {
      fVar3 = 0.0;
      goto LAB_0070c3a8;
    }
    if (param_4 == 0) {
      fVar4 = 0.0;
      fVar3 = 1.0;
      goto LAB_0070c3b0;
    }
  }
  uVar5 = **(undefined8 **)(param_3 + 0x3b8);
  local_50 = *(float *)(*(undefined8 **)(param_3 + 0x3b8) + 1);
  local_58._0_4_ = (float)uVar5;
  local_58._4_4_ = (float)((ulong)uVar5 >> 0x20);
  local_68 = param_1 + (float)local_58;
  fStack_64 = local_58._4_4_ + 0.1 + 0.0;
  local_60 = param_2 + local_50;
  local_58 = CONCAT44(local_58._4_4_ + 0.1,(float)local_58);
  DeferredDebugRenderer::addLine(this,(float *)&local_58,afStack_48,&local_68,afStack_48,0x7ff);
LAB_0070c424:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


