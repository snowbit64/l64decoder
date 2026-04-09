// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 00721f84
// Size: 280 bytes
// Signature: undefined __thiscall writeToStream(TrafficVehicle * this, GsBitStream * param_1)


/* TrafficVehicle::writeToStream(GsBitStream*) */

void __thiscall TrafficVehicle::writeToStream(TrafficVehicle *this,GsBitStream *param_1)

{
  TrafficVehicle TVar1;
  TrafficVehicle TVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  TVar1 = this[0x40];
  TVar2 = this[0x21a];
  local_3c = CONCAT31(local_3c._1_3_,TVar1 == (TrafficVehicle)0x0 && TVar2 != (TrafficVehicle)0x0);
  GsBitStream::writeBits(param_1,(uchar *)&local_3c,1,true);
  if (TVar1 == (TrafficVehicle)0x0 && TVar2 != (TrafficVehicle)0x0) {
    local_3c = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(*(long *)(this + 0x48) + 0x18)) >>
                    3) * -0xf0f0f0f;
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,*(uint *)(*(long *)(this + 0x48) + 0xc),true);
    fVar7 = *(float *)(this + 0x214);
    fVar6 = 0.0;
    if ((0.0 <= fVar7) && (fVar6 = 1.0, fVar7 <= 1.0)) {
      fVar6 = fVar7;
    }
    lVar4 = *(long *)(this + 0x1e8);
    uVar5 = (uint)(fVar6 * *(float *)(lVar4 + 0x34));
    local_40 = *(uint *)(lVar4 + 0x38);
    if (uVar5 <= *(uint *)(lVar4 + 0x38)) {
      local_40 = uVar5;
    }
    GsBitStream::writeBits(param_1,(uchar *)&local_40,*(uint *)(lVar4 + 0x30),true);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


