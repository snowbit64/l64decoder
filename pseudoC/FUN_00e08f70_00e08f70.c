// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e08f70
// Entry Point: 00e08f70
// Size: 792 bytes
// Signature: undefined FUN_00e08f70(void)


undefined8 FUN_00e08f70(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_1 + 0x30);
  uVar1 = oggpack_read(param_2,8);
  *(uint *)(lVar8 + 0x20) = uVar1 + 1;
  if (uVar1 < 0x7fffffff) {
    lVar9 = 0;
    do {
      lVar5 = vorbis_staticbook_unpack(param_2);
      *(long *)(lVar8 + 0xb28 + lVar9 * 8) = lVar5;
      if (lVar5 == 0) goto LAB_00e08fb0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar8 + 0x20));
    uVar1 = oggpack_read(param_2,6);
    if (uVar1 < 0x7fffffff) {
      iVar3 = uVar1 + 1;
      do {
        iVar2 = oggpack_read(param_2,0x10);
        if (iVar2 != 0) goto LAB_00e08fb0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar1 = oggpack_read(param_2,6);
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      if (uVar1 < 0x7fffffff) {
        lVar9 = 0;
        do {
          uVar6 = oggpack_read(param_2,0x10);
          *(uint *)(lVar8 + 0x628 + lVar9 * 4 + -0x100) = (uint)uVar6;
          if (1 < (uint)uVar6) goto LAB_00e08fb0;
          lVar5 = (**(code **)(*(long *)(_floor_P +
                                        (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (uVar6 & 0xffffffff) << 3)) + 8))(param_1,param_2);
          *(long *)(lVar8 + 0x628 + lVar9 * 8) = lVar5;
          if (lVar5 == 0) goto LAB_00e08fb0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar8 + 0x18));
        uVar1 = oggpack_read(param_2,6);
        *(uint *)(lVar8 + 0x1c) = uVar1 + 1;
        if (uVar1 < 0x7fffffff) {
          lVar9 = 0;
          do {
            uVar6 = oggpack_read(param_2,0x10);
            *(uint *)(lVar8 + 0x928 + lVar9 * 4 + -0x100) = (uint)uVar6;
            if (2 < (uint)uVar6) goto LAB_00e08fb0;
            lVar5 = (**(code **)(*(long *)(_residue_P +
                                          (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 |
                                          (uVar6 & 0xffffffff) << 3)) + 8))(param_1,param_2);
            *(long *)(lVar8 + 0x928 + lVar9 * 8) = lVar5;
            if (lVar5 == 0) goto LAB_00e08fb0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar8 + 0x1c));
          uVar1 = oggpack_read(param_2,6);
          *(uint *)(lVar8 + 0x14) = uVar1 + 1;
          if (uVar1 < 0x7fffffff) {
            lVar9 = 0;
            do {
              iVar3 = oggpack_read(param_2,0x10);
              *(int *)(lVar8 + 0x328 + lVar9 * 4 + -0x100) = iVar3;
              if (iVar3 != 0) goto LAB_00e08fb0;
              lVar5 = FUN_00e1517c(param_1,param_2);
              *(long *)(lVar8 + 0x328 + lVar9 * 8) = lVar5;
              if (lVar5 == 0) goto LAB_00e08fb0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar8 + 0x14));
            uVar1 = oggpack_read(param_2,6);
            *(uint *)(lVar8 + 0x10) = uVar1 + 1;
            if (uVar1 < 0x7fffffff) {
              lVar5 = 0;
              lVar9 = lVar8 + 0x28;
              do {
                pvVar7 = calloc(1,0x10);
                lVar10 = lVar5 * 8;
                *(void **)(lVar9 + lVar10) = pvVar7;
                uVar4 = oggpack_read(param_2,1);
                **(undefined4 **)(lVar9 + lVar10) = uVar4;
                uVar4 = oggpack_read(param_2,0x10);
                *(undefined4 *)(*(long *)(lVar9 + lVar10) + 4) = uVar4;
                uVar4 = oggpack_read(param_2,0x10);
                *(undefined4 *)(*(long *)(lVar9 + lVar10) + 8) = uVar4;
                iVar3 = oggpack_read(param_2,8);
                lVar10 = *(long *)(lVar9 + lVar10);
                *(int *)(lVar10 + 0xc) = iVar3;
                if ((((0 < *(int *)(lVar10 + 4)) || (0 < *(int *)(lVar10 + 8))) || (iVar3 < 0)) ||
                   (*(int *)(lVar8 + 0x14) <= iVar3)) goto LAB_00e08fb0;
                lVar5 = lVar5 + 1;
              } while (lVar5 < *(int *)(lVar8 + 0x10));
              lVar8 = oggpack_read(param_2,1);
              if (lVar8 == 1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_00e08fb0:
  vorbis_info_clear(param_1);
  return 0xffffff7b;
}


