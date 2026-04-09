// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8398
// Entry Point: 007b8398
// Size: 224 bytes
// Signature: undefined FUN_007b8398(void)


void FUN_007b8398(undefined8 param_1,long param_2)

{
  long lVar1;
  GsBitStream *pGVar2;
  ulong uVar3;
  uchar *puVar4;
  ushort local_4c [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  local_4c[0] = 0;
  pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
  uVar3 = GsBitStream::readBits(pGVar2,(uchar *)local_4c,0x10,true);
  if ((uVar3 & 1) != 0) {
    uVar3 = (ulong)local_4c[0];
    puVar4 = (uchar *)operator_new__(uVar3 + 1);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      pGVar2 = (GsBitStream *)NetworkStream::getReadStream();
      uVar3 = GsBitStream::readAlignedBytes(pGVar2,puVar4,(uint)local_4c[0]);
      if ((uVar3 & 1) == 0) {
        operator_delete__(puVar4);
        goto LAB_007b844c;
      }
      uVar3 = (ulong)local_4c[0];
    }
    puVar4[uVar3] = '\0';
    *(uchar **)(param_2 + 0x100) = puVar4;
    *(undefined4 *)(param_2 + 0x108) = 6;
    *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) | 1;
  }
LAB_007b844c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


