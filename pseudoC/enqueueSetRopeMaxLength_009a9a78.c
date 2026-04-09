// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetRopeMaxLength
// Entry Point: 009a9a78
// Size: 276 bytes
// Signature: undefined __thiscall enqueueSetRopeMaxLength(Bt2ScenegraphPhysicsContext * this, uint param_1, float param_2)


/* Bt2ScenegraphPhysicsContext::enqueueSetRopeMaxLength(unsigned int, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetRopeMaxLength
          (Bt2ScenegraphPhysicsContext *this,uint param_1,float param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  uint local_58;
  undefined4 uStack_54;
  float local_50;
  long local_28;
  ulong uVar11;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uStack_54 = 0;
  local_58 = param_1;
  local_50 = param_2;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    uVar3 = *(ulong *)(this + 0x2b8);
    if (uVar3 != 0) {
      uVar4 = (ulong)param_1;
      uVar10 = NEON_cnt(uVar3,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
      if ((uVar11 & 0xffffffff) < 2) {
        uVar5 = (ulong)((int)uVar3 - 1U & param_1);
      }
      else {
        uVar5 = uVar4;
        if (uVar3 <= uVar4) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar4 / uVar3;
          }
          uVar5 = uVar4 - uVar5 * uVar3;
        }
      }
      pplVar6 = *(long ***)(*(long *)(this + 0x2b0) + uVar5 * 8);
      if ((pplVar6 != (long **)0x0) && (plVar7 = *pplVar6, plVar7 != (long *)0x0)) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_1) {
              Bt2Rope::setMaxLength((Bt2Rope *)plVar7[3],param_2);
              break;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar8 = uVar8 & uVar3 - 1;
            }
            else if (uVar3 <= uVar8) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar1 * uVar3;
            }
            if (uVar8 != uVar5) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  else {
    FUN_009a9b8c(this + 0x308,&local_58);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


