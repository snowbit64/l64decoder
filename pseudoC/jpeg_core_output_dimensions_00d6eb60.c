// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_core_output_dimensions
// Entry Point: 00d6eb60
// Size: 872 bytes
// Signature: undefined jpeg_core_output_dimensions(void)


void jpeg_core_output_dimensions(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 0x20c) * *(int *)(param_1 + 0x44);
  if (uVar2 < uVar3) {
    if (uVar2 * 2 < uVar3) {
      if (uVar3 < uVar2 * 3 || uVar3 + uVar2 * -3 == 0) {
        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 3);
        lVar9 = 3;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
      }
      else if (uVar2 * 4 < uVar3) {
        if (uVar3 < uVar2 * 5 || uVar3 + uVar2 * -5 == 0) {
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 5);
          lVar9 = 5;
          uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 5;
        }
        else if (uVar3 < uVar2 * 6 || uVar3 + uVar2 * -6 == 0) {
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 6);
          lVar9 = 6;
          uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 6;
        }
        else if (uVar3 < uVar2 * 7 || uVar3 + uVar2 * -7 == 0) {
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 7);
          lVar9 = 7;
          uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 7;
        }
        else if (uVar2 * 8 < uVar3) {
          if (uVar3 < uVar2 * 9 || uVar3 + uVar2 * -9 == 0) {
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 9);
            lVar9 = 9;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 9;
          }
          else if (uVar3 < uVar2 * 10 || uVar3 + uVar2 * -10 == 0) {
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 10);
            lVar9 = 10;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 10;
          }
          else if (uVar3 < uVar2 * 0xb || uVar3 + uVar2 * -0xb == 0) {
            lVar9 = 0xb;
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 0xb);
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 0xb;
          }
          else if (uVar3 < uVar2 * 0xc || uVar3 + uVar2 * -0xc == 0) {
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 0xc);
            lVar9 = 0xc;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 0xc;
          }
          else {
            if (uVar3 < uVar2 * 0xd || uVar3 + uVar2 * -0xd == 0) {
              uVar2 = *(uint *)(param_1 + 0x30);
              lVar9 = 0xd;
            }
            else {
              if (uVar2 * 0xe <= uVar3 && uVar3 + uVar2 * -0xe != 0) {
                if (uVar3 < uVar2 * 0xf || uVar3 + uVar2 * -0xf == 0) {
                  uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 0xf);
                  lVar9 = 0xf;
                  uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 0xf;
                }
                else {
                  uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 4);
                  lVar9 = 0x10;
                  uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 4;
                }
                goto LAB_00d6ee14;
              }
              uVar2 = *(uint *)(param_1 + 0x30);
              lVar9 = 0xe;
            }
            uVar4 = jdiv_round_up((ulong)uVar2 * lVar9);
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * lVar9;
          }
        }
        else {
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 3);
          lVar9 = 8;
          uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 3;
        }
      }
      else {
        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 2);
        lVar9 = 4;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 2;
      }
    }
    else {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 1);
      lVar9 = 2;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 1;
    }
  }
  else {
    uVar4 = jdiv_round_up(*(undefined4 *)(param_1 + 0x30));
    uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    lVar9 = 1;
  }
LAB_00d6ee14:
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  uVar4 = jdiv_round_up(uVar5,(long)*(int *)(param_1 + 0x20c));
  iVar6 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  uVar4 = (undefined4)lVar9;
  *(undefined4 *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x18c) = uVar4;
  if (0 < iVar6) {
    lVar9 = *(long *)(param_1 + 0x120);
    if (iVar6 - 1U == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = (ulong)(iVar6 - 1U) + 1;
      uVar5 = uVar1 & 0x1fffffffe;
      puVar7 = (undefined4 *)(lVar9 + 0x88);
      uVar8 = uVar5;
      do {
        puVar7[-1] = uVar4;
        *puVar7 = uVar4;
        uVar8 = uVar8 - 2;
        puVar7[-0x19] = uVar4;
        puVar7[-0x18] = uVar4;
        puVar7 = puVar7 + 0x30;
      } while (uVar8 != 0);
      lVar9 = lVar9 + uVar5 * 0x60;
      if (uVar1 == uVar5) {
        return;
      }
    }
    puVar7 = (undefined4 *)(lVar9 + 0x28);
    iVar6 = iVar6 - (int)uVar5;
    do {
      puVar7[-1] = uVar4;
      *puVar7 = uVar4;
      puVar7 = puVar7 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


