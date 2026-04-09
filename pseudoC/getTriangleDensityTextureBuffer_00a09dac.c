// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTriangleDensityTextureBuffer
// Entry Point: 00a09dac
// Size: 400 bytes
// Signature: undefined __thiscall getTriangleDensityTextureBuffer(RenderController * this, Geometry * param_1)


/* RenderController::getTriangleDensityTextureBuffer(Geometry const*) */

void __thiscall
RenderController::getTriangleDensityTextureBuffer(RenderController *this,Geometry *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long **pplVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined4 local_94;
  undefined4 *local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ulong *)(this + 0x2a8);
  if (uVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar6 = (ulong)uVar1;
    uVar13 = NEON_cnt(uVar5,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & uVar1);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    pplVar9 = *(long ***)(*(long *)(this + 0x2a0) + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar10 = *pplVar9, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar6) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            lVar4 = plVar10[3];
            goto LAB_00a09f0c;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar2 * uVar5;
          }
          if (uVar11 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  lVar4 = *(long *)(this + 0x298);
  if (lVar4 == 0) {
    plVar10 = *(long **)this;
    local_40 = "Invalid Triangle Density Texture Buffer";
    local_90 = &local_94;
    local_88 = 0;
    uStack_4c = 0x3f80000000000000;
    local_54 = 0;
    local_6c = 0;
    local_60 = 0;
    local_44 = 0;
    local_74 = 0x100000001;
    local_5c = 0x100000001;
    local_68 = 0x1700000004;
    local_84 = 0xffffffff00000000;
    local_7c = 0x100000001;
    local_94 = 0;
    uVar13 = (**(code **)(*plVar10 + 0x138))(plVar10);
    lVar4 = (**(code **)(*plVar10 + 0x100))(plVar10,uVar13,&local_90);
    *(long *)(this + 0x298) = lVar4;
  }
LAB_00a09f0c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


