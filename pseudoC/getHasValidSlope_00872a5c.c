// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasValidSlope
// Entry Point: 00872a5c
// Size: 332 bytes
// Signature: undefined __thiscall getHasValidSlope(NavigationPath * this, float param_1, float param_2)


/* NavigationPath::getHasValidSlope(float, float) const */

byte __thiscall NavigationPath::getHasValidSlope(NavigationPath *this,float param_1,float param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  fVar5 = 1.57079 - param_1;
  if (1.57079 - param_1 < 0.0) {
    fVar5 = 0.0;
  }
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = cosf(fVar5);
  fVar7 = 1.57079 - param_2;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  fVar7 = cosf(fVar7);
  uVar3 = Spline::getNumOfCV();
  if (uVar3 < 2) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar4 = 1;
    do {
      Spline::getCV(*(Spline **)(this + 0x20),uVar4 - 1,&local_64);
      Spline::getCV(*(Spline **)(this + 0x20),uVar4,&local_70);
      fVar6 = fStack_6c - fStack_60;
      uVar8 = NEON_fmadd(local_70 - local_64,local_70 - local_64,fVar6 * fVar6);
      fVar9 = (float)NEON_fmadd(local_68 - local_5c,local_68 - local_5c,uVar8);
      if ((0.0 < SQRT(fVar9)) &&
         (fVar6 = fVar6 / SQRT(fVar9),
         (fVar6 < fVar5 || fVar6 != fVar7) && (fVar6 < fVar5 || fVar7 <= fVar6))) break;
      uVar4 = uVar4 + 1;
      bVar2 = uVar4 < uVar3;
    } while (uVar3 != uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


