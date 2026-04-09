// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHidDescriptorPayload
// Entry Point: 00b23cb0
// Size: 512 bytes
// Signature: undefined __cdecl readHidDescriptorPayload(USBPacketBuffer * param_1, HidDescriptor * * param_2)


/* USBUtil::readHidDescriptorPayload(USBPacketBuffer&, USBUtil::HidDescriptor*&) */

undefined8 USBUtil::readHidDescriptorPayload(USBPacketBuffer *param_1,HidDescriptor **param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  USBPacketBuffer UVar4;
  undefined uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  long lVar10;
  
  UVar4 = *param_1;
  *param_2 = (HidDescriptor *)0x0;
  if (UVar4 == (USBPacketBuffer)0x0) {
    uVar7 = USBPacketBuffer::getAt(param_1,0);
    iVar8 = USBPacketBuffer::getAt(param_1,1);
    if (*(ulong *)(param_1 + 0x10) < *(long *)(param_1 + 0x18) + 2U) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x10);
      *param_1 = (USBPacketBuffer)0x1;
    }
    else {
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2U;
    }
    uVar5 = USBPacketBuffer::getAt(param_1,0);
    if (*(ulong *)(param_1 + 0x10) < *(long *)(param_1 + 0x18) + 1U) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x10);
      *param_1 = (USBPacketBuffer)0x1;
    }
    else {
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1U;
    }
    bVar6 = USBPacketBuffer::getAt(param_1,0);
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar1 = *(long *)(param_1 + 0x18) + 1;
    if (uVar3 < uVar1) {
      *(ulong *)(param_1 + 0x18) = uVar3;
      *param_1 = (USBPacketBuffer)0x1;
      uVar1 = uVar3;
    }
    else {
      *(ulong *)(param_1 + 0x18) = uVar1;
    }
    if (bVar6 != 0) {
      if ((uint)((int)uVar3 - (int)uVar1) < (uint)bVar6 * 3) {
        return 1;
      }
      puVar9 = (ushort *)operator_new((ulong)(bVar6 - 1) * 4 + 8);
      *puVar9 = uVar7 & 0xff | (ushort)(iVar8 << 8);
      *(undefined *)(puVar9 + 1) = uVar5;
      *(byte *)((long)puVar9 + 3) = bVar6;
      lVar10 = 0;
      do {
        uVar5 = USBPacketBuffer::getAt(param_1,0);
        if (*(ulong *)(param_1 + 0x10) < *(long *)(param_1 + 0x18) + 1U) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x10);
          *param_1 = (USBPacketBuffer)0x1;
        }
        else {
          *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1U;
        }
        *(undefined *)((long)puVar9 + lVar10 + 4) = uVar5;
        uVar7 = USBPacketBuffer::getAt(param_1,0);
        iVar8 = USBPacketBuffer::getAt(param_1,1);
        if (*(ulong *)(param_1 + 0x10) < *(long *)(param_1 + 0x18) + 2U) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x10);
          *param_1 = (USBPacketBuffer)0x1;
        }
        else {
          *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2U;
        }
        lVar2 = lVar10 + 4;
        *(ushort *)((long)puVar9 + lVar10 + 6) = uVar7 & 0xff | (ushort)(iVar8 << 8);
        lVar10 = lVar2;
      } while ((ulong)bVar6 * 4 - lVar2 != 0);
      if (*param_1 == (USBPacketBuffer)0x0) {
        *param_2 = (HidDescriptor *)puVar9;
        return 0;
      }
      operator_delete(puVar9);
    }
  }
  return 1;
}


