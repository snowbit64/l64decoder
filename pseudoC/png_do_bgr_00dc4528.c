// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_bgr
// Entry Point: 00dc4528
// Size: 404 bytes
// Signature: undefined png_do_bgr(void)


void png_do_bgr(int *param_1,undefined2 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined uVar5;
  int iVar6;
  ulong uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  
  bVar2 = *(byte *)(param_1 + 4);
  if ((bVar2 >> 1 & 1) != 0) {
    iVar6 = *param_1;
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (bVar2 == 2) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar4 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar4;
          param_2 = param_2 + 3;
        }
      }
      else if (bVar2 == 6) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar4 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar4;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (*(char *)((long)param_1 + 0x11) == '\b') {
      if (bVar2 == 2) {
        if (iVar6 != 0) {
          if (iVar6 - 1U == 0) {
            uVar7 = 0;
          }
          else {
            uVar1 = (ulong)(iVar6 - 1U) + 1;
            puVar8 = param_2 + 1;
            uVar7 = uVar1 & 0x1fffffffe;
            param_2 = (undefined2 *)((long)param_2 + uVar7 * 3);
            uVar9 = uVar7;
            do {
              uVar9 = uVar9 - 2;
              uVar5 = *(undefined *)(puVar8 + -1);
              uVar3 = *(undefined *)((long)puVar8 + 1);
              *(undefined *)(puVar8 + -1) = *(undefined *)puVar8;
              *(undefined *)((long)puVar8 + 1) = *(undefined *)((long)puVar8 + 3);
              *(undefined *)puVar8 = uVar5;
              *(undefined *)((long)puVar8 + 3) = uVar3;
              puVar8 = puVar8 + 3;
            } while (uVar9 != 0);
            if (uVar1 == uVar7) {
              return;
            }
          }
          iVar6 = iVar6 - (int)uVar7;
          do {
            iVar6 = iVar6 + -1;
            uVar3 = *(undefined *)param_2;
            *(undefined *)param_2 = *(undefined *)(param_2 + 1);
            *(undefined *)(param_2 + 1) = uVar3;
            param_2 = (undefined2 *)((long)param_2 + 3);
          } while (iVar6 != 0);
        }
      }
      else if ((bVar2 == 6) && (iVar6 != 0)) {
        if (iVar6 - 1U == 0) {
          uVar7 = 0;
        }
        else {
          uVar1 = (ulong)(iVar6 - 1U) + 1;
          puVar8 = param_2 + 2;
          uVar7 = uVar1 & 0x1fffffffe;
          param_2 = param_2 + uVar7 * 2;
          uVar9 = uVar7;
          do {
            uVar9 = uVar9 - 2;
            uVar5 = *(undefined *)(puVar8 + -2);
            uVar3 = *(undefined *)puVar8;
            *(undefined *)(puVar8 + -2) = *(undefined *)(puVar8 + -1);
            *(undefined *)puVar8 = *(undefined *)(puVar8 + 1);
            *(undefined *)(puVar8 + -1) = uVar5;
            *(undefined *)(puVar8 + 1) = uVar3;
            puVar8 = puVar8 + 4;
          } while (uVar9 != 0);
          if (uVar1 == uVar7) {
            return;
          }
        }
        iVar6 = iVar6 - (int)uVar7;
        do {
          iVar6 = iVar6 + -1;
          uVar3 = *(undefined *)param_2;
          *(undefined *)param_2 = *(undefined *)(param_2 + 1);
          *(undefined *)(param_2 + 1) = uVar3;
          param_2 = param_2 + 2;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}


