// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findClosestSplinePosition
// Entry Point: 0072cffc
// Size: 136 bytes
// Signature: undefined __thiscall findClosestSplinePosition(VehicleNavigationMapGenerator * this, Vector3 * param_1, Vector3 * param_2, float param_3, uint * param_4, float * param_5)


/* VehicleNavigationMapGenerator::findClosestSplinePosition(Vector3 const&, Vector3 const&, float,
   unsigned int&, float&) */

uint __thiscall
VehicleNavigationMapGenerator::findClosestSplinePosition
          (VehicleNavigationMapGenerator *this,Vector3 *param_1,Vector3 *param_2,float param_3,
          uint *param_4,float *param_5)

{
  long lVar1;
  uint uVar2;
  ushort local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = VehicleNavigationMap::getClosestRoadSegment
                    ((VehicleNavigationMap *)(*(long *)(this + 0x108) + 0x10),param_1,param_2,
                     param_3,(uint *)&local_3c,param_5);
  if ((uVar2 & 1) != 0) {
    *param_4 = *(uint *)(*(long *)(*(long *)(this + 0x108) + 0x28) + (ulong)local_3c * 0x50 + 0x14);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


