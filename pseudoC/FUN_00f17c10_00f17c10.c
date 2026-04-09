// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17c10
// Entry Point: 00f17c10
// Size: 308 bytes
// Signature: undefined FUN_00f17c10(void)


undefined * FUN_00f17c10(long param_1,long param_2)

{
  uint uVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  undefined *puVar5;
  void *pvVar6;
  void *__src;
  int iVar7;
  undefined8 uVar8;
  ulong __n;
  
  puVar5 = (undefined *)FUN_00f10278(param_1,0x30,*(undefined *)(param_1 + 4));
  uVar2 = *(undefined *)(param_1 + 4);
  uVar3 = *(undefined *)(param_2 + 3);
  bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
  *puVar5 = 6;
  puVar5[2] = uVar2;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[3] = uVar3;
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  puVar5[1] = bVar4 & 3;
  uVar1 = *(uint *)(param_2 + 8);
  *(undefined1 **)(puVar5 + 0x20) = luaH_dummynode;
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) goto LAB_00f17d3c;
    pvVar6 = (void *)FUN_00f10090(param_1,(ulong)uVar1 << 4);
    *(void **)(puVar5 + 0x18) = pvVar6;
    if (*(int *)(puVar5 + 0xc) < 1) {
      if (*(int *)(param_2 + 0xc) < 0) {
        iVar7 = -*(int *)(param_2 + 0xc);
      }
      else {
        iVar7 = *(int *)(param_2 + 8);
      }
      *(int *)(puVar5 + 0xc) = -iVar7;
    }
    iVar7 = *(int *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x18);
    *(int *)(puVar5 + 8) = iVar7;
    memcpy(pvVar6,__src,(long)iVar7 << 4);
  }
  if (*(undefined1 **)(param_2 + 0x20) != luaH_dummynode) {
    if (*(byte *)(param_2 + 6) == 0x1f) {
LAB_00f17d3c:
                    /* WARNING: Subroutine does not return */
      FUN_00f1007c(param_1);
    }
    uVar1 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
    __n = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    pvVar6 = (void *)FUN_00f10090(param_1,__n,puVar5[2]);
    *(void **)(puVar5 + 0x20) = pvVar6;
    *(undefined2 *)(puVar5 + 6) = *(undefined2 *)(param_2 + 6);
    memcpy(pvVar6,*(void **)(param_2 + 0x20),__n);
    *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return puVar5;
}


