// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRopeLength
// Entry Point: 009a99b0
// Size: 200 bytes
// Signature: undefined __thiscall getRopeLength(Bt2ScenegraphPhysicsContext * this, uint param_1, uint * param_2)


/* Bt2ScenegraphPhysicsContext::getRopeLength(unsigned int, unsigned int&) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::getRopeLength
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar2 = *(ulong *)(this + 0x2b8);
  if (uVar2 != 0) {
    uVar3 = (ulong)param_1;
    uVar10 = NEON_cnt(uVar2,1);
    uVar8 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar8);
    if ((uVar11 & 0xffffffff) < 2) {
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
            uVar9 = *(undefined4 *)(plVar6[3] + 0x20);
            *param_2 = *(uint *)(plVar6[3] + 0x30);
            return uVar9;
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar4) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  *param_2 = 0;
  return 0;
}


