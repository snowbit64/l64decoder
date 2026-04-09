// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveBrepToFileBuffer
// Entry Point: 00b761e4
// Size: 388 bytes
// Signature: undefined __cdecl saveBrepToFileBuffer(Brep * param_1, uchar * param_2)


/* BrepUtil::saveBrepToFileBuffer(Brep const*, unsigned char*) */

void BrepUtil::saveBrepToFileBuffer(Brep *param_1,uchar *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = *(long *)(param_1 + 0x2fa0);
  lVar7 = *(long *)(param_1 + 0x2f98);
  puVar8 = *(undefined8 **)(param_1 + 0x2ef0);
  lVar12 = *(long *)(param_1 + 0x2f70);
  lVar13 = *(long *)(param_1 + 0x2f68);
  uVar3 = (uint)(*(int *)(param_1 + 0x2ef8) - (int)puVar8) >> 4 & 0xffff;
  puVar4 = (undefined8 *)param_2;
  if (uVar3 != 0) {
    uVar9 = *puVar8;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar8 + 1);
    puVar4 = (undefined8 *)(param_2 + 0xc);
    *(undefined8 *)param_2 = uVar9;
    if (uVar3 != 1) {
      lVar10 = (ulong)uVar3 - 1;
      lVar11 = 0x10;
      puVar8 = puVar4;
      do {
        lVar10 = lVar10 + -1;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x2ef0) + lVar11);
        lVar11 = lVar11 + 0x10;
        uVar9 = *puVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar4 + 1);
        puVar4 = (undefined8 *)((long)puVar8 + 0xc);
        *puVar8 = uVar9;
        puVar8 = puVar4;
      } while (lVar10 != 0);
    }
  }
  uVar3 = (int)((ulong)(lVar5 - lVar7) >> 3) * 0xaaab & 0xffff;
  if (uVar3 != 0) {
    lVar5 = 0;
    do {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x2f98) + lVar5);
      lVar5 = lVar5 + 0x18;
      *puVar4 = *(undefined8 *)((long)puVar8 + 0xc);
      uVar9 = *puVar8;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar8 + 1);
      puVar4[1] = uVar9;
      puVar4 = (undefined8 *)((long)puVar4 + 0x14);
    } while ((ulong)uVar3 * 0x18 - lVar5 != 0);
  }
  if ((int)((ulong)(lVar12 - lVar13) >> 5) != 0) {
    uVar6 = 0;
    lVar5 = 2;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar5);
      lVar5 = lVar5 + 0x20;
      *(undefined4 *)puVar4 = *(undefined4 *)(puVar1 + 1);
      lVar7 = (uVar6 & 0xfffffffc) * 8;
      uVar6 = uVar6 + 4;
      *(undefined2 *)((long)puVar4 + 4) = *puVar1;
      uVar2 = *(undefined2 *)
               (*(long *)(param_1 + 0x2f50) +
               (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar7 + 8) * 0xc);
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar7 + 10);
      *(undefined2 *)((long)puVar4 + 6) = uVar2;
      uVar2 = *(undefined2 *)
               (*(long *)(param_1 + 0x2f50) +
               (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar7 + 0x10) * 0xc);
      *(undefined2 *)((long)puVar4 + 0xc) =
           *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar7 + 0x12);
      *(undefined2 *)((long)puVar4 + 10) = uVar2;
      uVar2 = *(undefined2 *)
               (*(long *)(param_1 + 0x2f50) +
               (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar7 + 0x18) * 0xc);
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar7 + 0x1a);
      *(undefined2 *)((long)puVar4 + 0xe) = uVar2;
      puVar4 = (undefined8 *)((long)puVar4 + 0x12);
    } while (((ulong)(lVar12 - lVar13) >> 5 & 0xffffffff) * 4 - uVar6 != 0);
  }
  return;
}


