// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRopeMaxLength
// Entry Point: 009a5738
// Size: 184 bytes
// Signature: undefined __thiscall setRopeMaxLength(Bt2ScenegraphPhysicsContext * this, uint param_1, SetRopeMaxLength * param_2)


/* Bt2ScenegraphPhysicsContext::setRopeMaxLength(unsigned int,
   Bt2ScenegraphPhysicsContext::SetRopeMaxLength const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setRopeMaxLength
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetRopeMaxLength *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar2 = *(ulong *)(this + 0x2b8);
  if (uVar2 != 0) {
    uVar3 = (ulong)param_1;
    uVar9 = NEON_cnt(uVar2,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_1);
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    pplVar5 = *(long ***)(*(long *)(this + 0x2b0) + uVar4 * 8);
    if ((pplVar5 != (long **)0x0) && (plVar6 = *pplVar5, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(uint *)(plVar6 + 2) == param_1) {
            Bt2Rope::setMaxLength((Bt2Rope *)plVar6[3],*(float *)param_2);
            return;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar4) {
            return;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}


