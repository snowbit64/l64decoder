// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 0071a350
// Size: 284 bytes
// Signature: undefined __thiscall writeToStream(TrafficSystem * this, GsBitStream * param_1)


/* TrafficSystem::writeToStream(GsBitStream*) */

void __thiscall TrafficSystem::writeToStream(TrafficSystem *this,GsBitStream *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  TrafficSystem local_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_5c[0] = this[0xb3];
  GsBitStream::writeBits(param_1,(uchar *)local_5c,1,true);
  if (this[0xb3] != (TrafficSystem)0x0) {
    if (*(int *)(this + 0x7254) != *(int *)(this + 0x7250)) {
      *(int *)(this + 0x7254) = *(int *)(this + 0x7250);
      uVar4 = *(uint *)(this + 0x4d18);
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = (uint)(*(int *)(this + 0x7260) + *(int *)(this + 0x7258)) / uVar4;
      }
      *(uint *)(this + 0x7260) = (*(int *)(this + 0x7260) + *(int *)(this + 0x7258)) - uVar1 * uVar4
      ;
    }
    GsBitStream::writeBits(param_1,(uchar *)(this + 0x7260),*(uint *)(this + 0x725c),true);
    if (*(int *)(this + 0x7258) != 0) {
      uVar4 = 0;
      do {
        uVar1 = *(uint *)(this + 0x4d18);
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar4 + *(int *)(this + 0x7260)) / uVar1;
        }
        TrafficVehicle::writeToStream
                  ((TrafficVehicle *)
                   (this + (ulong)((uVar4 + *(int *)(this + 0x7260)) - uVar2 * uVar1) * 0x3a8 +
                           0x4d20),param_1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x7258));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


