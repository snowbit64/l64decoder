// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TrafficVehicleSource
// Entry Point: 00717490
// Size: 284 bytes
// Signature: undefined __thiscall ~TrafficVehicleSource(TrafficVehicleSource * this)


/* WARNING: Type propagation algorithm not settling */
/* TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource() */

void __thiscall
TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource(TrafficVehicleSource *this)

{
  TrafficVehicleSource TVar1;
  
  *(undefined ***)this = &PTR_onAssetLoaded_00fda3f0;
  if (((byte)this[0x2d0] & 1) == 0) {
    TVar1 = this[0x220];
  }
  else {
    operator_delete(*(void **)(this + 0x2e0));
    TVar1 = this[0x220];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x200];
  }
  else {
    operator_delete(*(void **)(this + 0x230));
    TVar1 = this[0x200];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x1e0];
  }
  else {
    operator_delete(*(void **)(this + 0x210));
    TVar1 = this[0x1e0];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x1c0];
  }
  else {
    operator_delete(*(void **)(this + 0x1f0));
    TVar1 = this[0x1c0];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x1a8];
  }
  else {
    operator_delete(*(void **)(this + 0x1d0));
    TVar1 = this[0x1a8];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x188];
  }
  else {
    operator_delete(*(void **)(this + 0x1b8));
    TVar1 = this[0x188];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x170];
  }
  else {
    operator_delete(*(void **)(this + 0x198));
    TVar1 = this[0x170];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x158];
  }
  else {
    operator_delete(*(void **)(this + 0x180));
    TVar1 = this[0x158];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x140];
  }
  else {
    operator_delete(*(void **)(this + 0x168));
    TVar1 = this[0x140];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x150));
  }
  VehicleSource::~VehicleSource((VehicleSource *)this);
  return;
}


