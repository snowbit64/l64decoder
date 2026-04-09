// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e08db0
// Entry Point: 00e08db0
// Size: 448 bytes
// Signature: undefined FUN_00e08db0(void)


undefined8 FUN_00e08db0(void **param_1,long param_2)

{
  undefined uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = oggpack_read(param_2,0x20);
  if ((-1 < (int)uVar2) && ((long)(int)uVar2 <= *(long *)(param_2 + 0x20) + -8)) {
    puVar3 = (undefined *)calloc((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20,1);
    param_1[3] = puVar3;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = oggpack_read(param_2,8);
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
    uVar2 = oggpack_read(param_2,0x20);
    if ((-1 < (int)uVar2) &&
       (lVar6 = *(long *)(param_2 + 0x20), lVar4 = oggpack_bytes(param_2),
       (long)(int)uVar2 <= lVar6 - lVar4 >> 2)) {
      *(uint *)(param_1 + 2) = uVar2;
      pvVar5 = calloc((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20,8);
      *param_1 = pvVar5;
      pvVar5 = calloc((ulong)(uVar2 + 1),4);
      param_1[1] = pvVar5;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          uVar2 = oggpack_read(param_2,0x20);
          if (((int)uVar2 < 0) ||
             (lVar7 = *(long *)(param_2 + 0x20), lVar6 = oggpack_bytes(param_2),
             lVar7 - lVar6 < (long)(int)uVar2)) goto LAB_00e08f50;
          *(uint *)((long)param_1[1] + lVar4 * 4) = uVar2;
          pvVar5 = calloc((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20,1);
          *(void **)((long)*param_1 + lVar4 * 8) = pvVar5;
          if (uVar2 != 0) {
            puVar3 = *(undefined **)((long)*param_1 + lVar4 * 8);
            do {
              uVar2 = uVar2 - 1;
              uVar1 = oggpack_read(param_2,8);
              *puVar3 = uVar1;
              puVar3 = puVar3 + 1;
            } while (uVar2 != 0);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 2));
      }
      lVar4 = oggpack_read(param_2,1);
      if (lVar4 == 1) {
        return 0;
      }
    }
  }
LAB_00e08f50:
  vorbis_comment_clear(param_1);
  return 0xffffff7b;
}


