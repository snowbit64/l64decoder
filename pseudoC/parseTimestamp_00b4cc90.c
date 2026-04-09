// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTimestamp
// Entry Point: 00b4cc90
// Size: 188 bytes
// Signature: undefined __thiscall parseTimestamp(ENetConnection * this, GsBitStream * param_1)


/* ENetConnection::parseTimestamp(GsBitStream&) */

void __thiscall ENetConnection::parseTimestamp(ENetConnection *this,GsBitStream *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uchar local_40 [4];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = -1;
  uVar2 = GsBitStream::getReadOffset();
  local_40[0] = '\0';
  GsBitStream::readBits(param_1,local_40,8,true);
  if (local_40[0] == '\x19') {
    GsBitStream::readBits(param_1,(uchar *)&local_3c,0x20,true);
    iVar3 = local_3c + *(int *)(this + 0x474);
  }
  else {
    GsBitStream::setReadOffset(param_1,uVar2);
    iVar3 = -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


