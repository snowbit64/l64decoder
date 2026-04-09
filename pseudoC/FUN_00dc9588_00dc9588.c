// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc9588
// Entry Point: 00dc9588
// Size: 560 bytes
// Signature: undefined FUN_00dc9588(void)


/* WARNING: Removing unreachable block (ram,0x00dc95fc) */

int FUN_00dc9588(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  
  iVar3 = FUN_00dc8be0(param_1,param_2,param_3[1]);
  if (iVar3 == 0) {
    uVar9 = param_3[1];
    iVar10 = 0x400;
    *(undefined8 *)(param_1 + 0x178) = *param_3;
    *(byte **)(param_1 + 400) = (byte *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x198) = 0x400;
    uVar8 = uVar9;
    if (0xfffffffe < uVar9) {
      uVar8 = 0xffffffff;
    }
    uVar9 = uVar9 - uVar8;
    *(int *)(param_1 + 0x180) = (int)uVar8;
    puVar11 = (undefined8 *)(param_1 + 0x1e8);
    while( true ) {
      iVar3 = deflate(param_1 + 0x178,(ulong)(uVar9 == 0) << 2);
      uVar6 = *(uint *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x180) = 0;
      uVar9 = uVar9 + uVar6;
      if (iVar3 != 0) break;
      uVar8 = uVar9;
      if (0xfffffffe < uVar9) {
        uVar8 = 0xffffffff;
      }
      uVar9 = uVar9 - uVar8;
      *(int *)(param_1 + 0x180) = (int)uVar8;
      if (*(int *)(param_1 + 0x198) == 0) {
        if (iVar10 + param_4 < 0) {
LAB_00dc9688:
          iVar3 = -4;
          break;
        }
        puVar4 = (undefined8 *)*puVar11;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)png_malloc_base(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00dc9688;
          *puVar4 = 0;
          *puVar11 = puVar4;
        }
        iVar10 = *(int *)(param_1 + 0x1f0) + iVar10;
        *(undefined8 **)(param_1 + 400) = puVar4 + 1;
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x1f0);
        puVar11 = puVar4;
      }
    }
    iVar1 = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x198) = 0;
    iVar10 = iVar10 - iVar1;
    *(int *)(param_3 + 2) = iVar10;
    if ((uint)(iVar10 + param_4) < 0x7fffffff) {
      png_zstream_error(param_1,iVar3);
      *(undefined4 *)(param_1 + 0x170) = 0;
      if ((iVar3 == 1) && (uVar9 == 0)) {
        uVar9 = param_3[1];
        if (uVar9 < 0x4001) {
          bVar2 = *(byte *)((long)param_3 + 0x14);
          if ((bVar2 & 0xf) != 8) {
            return 0;
          }
          if (0x70 < (bVar2 & 0xf0)) {
            return 0;
          }
          uVar8 = 0x80L << (ulong)(bVar2 >> 4);
          if (uVar9 <= uVar8) {
            cVar5 = (bVar2 & 0xf0) + 8;
            uVar7 = (uint)(bVar2 >> 4);
            uVar6 = uVar7 << 0xc | 0x800;
            do {
              uVar7 = uVar7 - 1;
              uVar6 = uVar6 - 0x1000;
              cVar5 = cVar5 + -0x10;
              if (uVar7 == 0) break;
              uVar8 = uVar8 >> 1 & 0x7fffffff;
            } while (uVar9 <= uVar8);
            *(char *)((long)param_3 + 0x14) = cVar5;
            uVar7 = *(byte *)((long)param_3 + 0x15) & 0xe0;
            bVar2 = (byte)uVar7;
            *(byte *)((long)param_3 + 0x15) =
                 (bVar2 | bVar2 + (char)((uVar6 | uVar7) / 0x1f) * -0x1f) ^ 0x1f;
            return 0;
          }
        }
        iVar3 = 0;
      }
    }
    else {
      iVar3 = -4;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(char **)(param_1 + 0x1a8) = "compressed data too long";
    }
  }
  return iVar3;
}


