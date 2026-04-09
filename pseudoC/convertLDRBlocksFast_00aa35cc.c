// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertLDRBlocksFast
// Entry Point: 00aa35cc
// Size: 512 bytes
// Signature: undefined __cdecl convertLDRBlocksFast(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uchar * param_7, uint param_8)


/* ASTCUtil::convertLDRBlocksFast(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned char*, unsigned int) */

void ASTCUtil::convertLDRBlocksFast
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uchar *param_7,uint param_8)

{
  undefined uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulong __n;
  undefined2 *local_98;
  uint local_90;
  uint uStack_8c;
  ulong local_88;
  undefined auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  memset(param_7,0,(ulong)param_8);
  if (param_4 == 3) {
    GetProfile_astc_fast(auStack_80,param_5,param_6);
    puVar5 = (undefined2 *)operator_new__((ulong)(param_2 * param_3 * 4));
    puVar10 = puVar5;
    if (param_3 != 0) {
      uVar7 = 0;
      puVar6 = puVar5;
      do {
        puVar8 = puVar6;
        uVar9 = param_2;
        if (param_2 != 0) {
          do {
            uVar2 = *(undefined2 *)param_1;
            puVar6 = puVar8 + 2;
            uVar1 = *(undefined *)((long)param_1 + 2);
            *(undefined *)((long)puVar8 + 3) = 0xff;
            param_1 = (uchar *)((long)param_1 + 3);
            uVar9 = uVar9 - 1;
            *puVar8 = uVar2;
            *(undefined *)(puVar8 + 1) = uVar1;
            puVar8 = puVar6;
          } while (uVar9 != 0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_3);
    }
  }
  else {
    uVar4 = 0;
    if (param_4 != 4) goto LAB_00aa3790;
    GetProfile_astc_alpha_fast(auStack_80,param_5,param_6);
    puVar5 = (undefined2 *)param_1;
    puVar10 = (undefined2 *)0x0;
  }
  uVar7 = 0;
  if (param_5 != 0) {
    uVar7 = param_2 / param_5;
  }
  if (param_2 == uVar7 * param_5) {
    uVar7 = 0;
    if (param_6 != 0) {
      uVar7 = param_3 / param_6;
    }
    if (param_3 != uVar7 * param_6) goto LAB_00aa36e4;
    puVar6 = (undefined2 *)0x0;
  }
  else {
LAB_00aa36e4:
    uVar7 = 0;
    if (param_5 != 0) {
      uVar7 = ((param_2 + param_5) - 1) / param_5;
    }
    uVar7 = uVar7 * param_5;
    uVar9 = 0;
    if (param_6 != 0) {
      uVar9 = ((param_3 + param_6) - 1) / param_6;
    }
    uVar9 = uVar9 * param_6;
    __n = (ulong)(uVar7 * uVar9 * 4);
    puVar6 = (undefined2 *)operator_new__(__n);
    memset(puVar6,0,__n);
    ImageUtil::addPaddingToImageRGBA((uchar *)puVar5,param_2,param_3,4,uVar7,uVar9,(uchar *)puVar6);
    puVar5 = puVar6;
    param_2 = uVar7;
    param_3 = uVar9;
  }
  local_88 = (ulong)(param_2 << 2);
  local_98 = puVar5;
  local_90 = param_2;
  uStack_8c = param_3;
  CompressBlocksASTC(&local_98,param_7,auStack_80);
  if (puVar10 != (undefined2 *)0x0) {
    operator_delete__(puVar10);
  }
  if (puVar6 != (undefined2 *)0x0) {
    operator_delete__(puVar6);
  }
  uVar4 = 1;
LAB_00aa3790:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


