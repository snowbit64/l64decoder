// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleSource
// Entry Point: 007175ac
// Size: 212 bytes
// Signature: undefined __thiscall ~VehicleSource(VehicleSource * this)


/* TrafficVehicle::VehicleSource::~VehicleSource() */

void __thiscall TrafficVehicle::VehicleSource::~VehicleSource(VehicleSource *this)

{
  VehicleSource VVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *(undefined ***)this = &PTR_onAssetLoaded_00fda440;
  if (((byte)this[0x70] & 1) == 0) {
    VVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    VVar1 = this[0x58];
  }
  if (((byte)VVar1 & 1) == 0) {
    VVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    VVar1 = this[0x40];
  }
  if (((byte)VVar1 & 1) == 0) {
    pbVar3 = *(byte **)(this + 0x28);
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    pbVar3 = *(byte **)(this + 0x28);
  }
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x30);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(this + 0x28);
    }
    *(byte **)(this + 0x30) = pbVar3;
    operator_delete(pbVar4);
  }
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 8));
  return;
}


