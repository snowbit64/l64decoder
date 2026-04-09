// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPacket
// Entry Point: 00b23bac
// Size: 260 bytes
// Signature: undefined __cdecl findPacket(uchar * param_1, uint param_2, uchar param_3, USBPacketBuffer * param_4)


/* USBUtil::findPacket(unsigned char const*, unsigned int, unsigned char, USBPacketBuffer&) */

void USBUtil::findPacket(uchar *param_1,uint param_2,uchar param_3,USBPacketBuffer *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uchar uVar4;
  uint uVar5;
  USBPacketBuffer local_68 [16];
  int local_58;
  undefined4 uStack_54;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  USBPacketBuffer::init(local_68,param_1,param_1 + param_2,false);
  do {
    uVar5 = USBPacketBuffer::getAt(local_68,0);
    uVar5 = uVar5 & 0xff;
    if ((uVar5 < 2) || (uVar2 = local_58 - (int)local_50, uVar2 < uVar5)) {
LAB_00b23c60:
      uVar5 = 1;
      goto LAB_00b23c64;
    }
    uVar4 = USBPacketBuffer::getAt(local_68,1);
    if (uVar4 == param_3) {
      uVar5 = USBPacketBuffer::getSubPacket(local_68,2,uVar5 - 2,param_4);
      uVar5 = ~uVar5 & 1;
      goto LAB_00b23c64;
    }
    uVar1 = local_50 + uVar5;
    if ((CONCAT44(uStack_54,local_58) < uVar1) ||
       (local_50 = uVar1, local_68[0] != (USBPacketBuffer)0x0)) goto LAB_00b23c60;
  } while (local_58 != (int)uVar1);
  uVar5 = 0;
LAB_00b23c64:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


