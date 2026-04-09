// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNearestAgent
// Entry Point: 00876364
// Size: 252 bytes
// Signature: undefined __thiscall getNearestAgent(AnimalCompanionManager * this, Vector3 * param_1)


/* AnimalCompanionManager::getNearestAgent(Vector3 const&) */

undefined8 __thiscall
AnimalCompanionManager::getNearestAgent(AnimalCompanionManager *this,Vector3 *param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x18c) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    fVar2 = 3.402823e+38;
    lVar6 = 0x10;
    do {
      AnimalSteering::getPosition
                ((AnimalSteering *)(*(long *)(this + 0xf8) + lVar4),(Vector3 *)&local_68);
      uVar7 = NEON_fmadd(*(float *)(param_1 + 4) - fStack_64,*(float *)(param_1 + 4) - fStack_64,
                         (*(float *)param_1 - local_68) * (*(float *)param_1 - local_68));
      fVar8 = (float)NEON_fmadd(*(float *)(param_1 + 8) - local_60,
                                *(float *)(param_1 + 8) - local_60,uVar7);
      if (fVar8 < fVar2) {
        uVar3 = *(undefined8 *)(*(long *)(this + 0xb0) + lVar6);
        fVar2 = fVar8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xe0;
      lVar6 = lVar6 + 0x58;
    } while (uVar5 < *(uint *)(this + 0x18c));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


