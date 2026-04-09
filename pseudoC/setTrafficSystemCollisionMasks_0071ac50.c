// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTrafficSystemCollisionMasks
// Entry Point: 0071ac50
// Size: 20 bytes
// Signature: undefined __thiscall setTrafficSystemCollisionMasks(TrafficSystem * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* TrafficSystem::setTrafficSystemCollisionMasks(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
TrafficSystem::setTrafficSystemCollisionMasks
          (TrafficSystem *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(this + 0x4cc8) = param_1;
  *(uint *)(this + 0x4ccc) = param_2;
  *(uint *)(this + 0x4cd0) = param_3;
  *(uint *)(this + 0x4cd4) = param_4;
  return;
}


