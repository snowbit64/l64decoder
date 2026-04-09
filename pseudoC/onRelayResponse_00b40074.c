// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRelayResponse
// Entry Point: 00b40074
// Size: 200 bytes
// Signature: undefined __cdecl onRelayResponse(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onRelayResponse(GsBitStream*, unsigned int) */

void MasterServerManager::onRelayResponse(GsBitStream *param_1,uint param_2)

{
  long lVar1;
  GsBitStream *this;
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x330) == 1) {
    NetworkAddress::readFromStream((NetworkAddress *)&local_40,this);
    GsBitStream::readAlignedBytes(this,(uchar *)(param_1 + 0x3d0),0x30);
    MasterServerUtil::readString(this,(basic_string *)(param_1 + 0x3b8));
    MasterServerUtil::readString(this,(basic_string *)(param_1 + 0x3a0));
    *(undefined4 *)(param_1 + 0x39c) = 0;
    GsBitStream::readBits(this,(uchar *)(param_1 + 0x39c),4,true);
    param_1[0x390] = (GsBitStream)0x1;
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(undefined4 *)(param_1 + 0x394) = local_40;
    *(undefined2 *)(param_1 + 0x398) = local_3c;
    invokeConnectionRequestSucceededCallback();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


