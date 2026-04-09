// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 0071a46c
// Size: 328 bytes
// Signature: undefined __thiscall readFromStream(TrafficSystem * this, GsBitStream * param_1, float param_2, float param_3, float param_4)


/* TrafficSystem::readFromStream(GsBitStream*, float, float, float) */

void __thiscall
TrafficSystem::readFromStream
          (TrafficSystem *this,GsBitStream *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int local_80;
  uchar local_7c [4];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_7c[0] = '\0';
  GsBitStream::readBits(param_1,local_7c,1,true);
  if (local_7c[0] != '\0') {
    local_80 = 0;
    GsBitStream::readBits(param_1,(uchar *)&local_80,*(uint *)(this + 0x725c),true);
    if (*(int *)(this + 0x7258) != 0) {
      uVar5 = 0;
      do {
        bVar4 = false;
        if ((this[0xb2] != (TrafficSystem)0x0) && (this[0xb3] != (TrafficSystem)0x0)) {
          bVar4 = *(int *)(this + 0x11f8) == *(int *)(this + 0x11fc);
        }
        uVar1 = *(uint *)(this + 0x4d18);
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar5 + local_80) / uVar1;
        }
        TrafficVehicle::readFromStream
                  ((TrafficVehicle *)
                   (this + (ulong)((uVar5 + local_80) - uVar2 * uVar1) * 0x3a8 + 0x4d20),param_1,
                   bVar4,param_2,param_3,param_4,(VehicleSharedContext *)(this + 0x4c88));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x7258));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


