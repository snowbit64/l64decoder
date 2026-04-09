// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 0071bbdc
// Size: 116 bytes
// Signature: undefined __thiscall onAssetLoaded(VehicleSource * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* TrafficVehicle::VehicleSource::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
TrafficVehicle::VehicleSource::onAssetLoaded
          (VehicleSource *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  VehicleSource *pVVar1;
  Node *this_00;
  
  if (this + 8 == (VehicleSource *)param_2) {
    ScenegraphNode::setVisibility((ScenegraphNode *)param_1,false);
    this_00 = **(Node ***)(param_1 + 0x28);
    if (this_00 != (Node *)0x0) {
      pVVar1 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        pVVar1 = *(VehicleSource **)(this + 0x50);
      }
      Node::getNodeFromReference(this_00,(char *)pVVar1);
      ScenegraphNode::setVisibility((ScenegraphNode *)this_00,false);
      return;
    }
  }
  return;
}


