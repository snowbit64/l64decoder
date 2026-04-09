// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readString
// Entry Point: 00b4279c
// Size: 200 bytes
// Signature: undefined __cdecl readString(GsBitStream * param_1, char * * param_2)


/* MasterServerUtil::readString(GsBitStream*, char*&) */

void MasterServerUtil::readString(GsBitStream *param_1,char **param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  ushort local_4c [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0;
  uVar3 = GsBitStream::readBits(param_1,(uchar *)local_4c,0x10,true);
  uVar2 = local_4c[0];
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = (ulong)local_4c[0];
    puVar5 = (uchar *)operator_new__(uVar3 + 1);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = GsBitStream::readAlignedBytes(param_1,puVar5,(uint)uVar2);
      if ((uVar3 & 1) == 0) {
        operator_delete__(puVar5);
        uVar4 = 0;
        goto LAB_00b42838;
      }
      uVar3 = (ulong)local_4c[0];
    }
    uVar4 = 1;
    puVar5[uVar3] = '\0';
    *param_2 = (char *)puVar5;
  }
LAB_00b42838:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


