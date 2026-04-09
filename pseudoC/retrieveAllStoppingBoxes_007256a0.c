// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: retrieveAllStoppingBoxes
// Entry Point: 007256a0
// Size: 108 bytes
// Signature: undefined __cdecl retrieveAllStoppingBoxes(Obstacle * param_1)


/* DynamicAvoidance::retrieveAllStoppingBoxes(Obstacle const*) const */

Obstacle * DynamicAvoidance::retrieveAllStoppingBoxes(Obstacle *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  type tVar3;
  undefined8 *in_x1;
  undefined8 *in_x8;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 4) {
    puVar4 = (undefined8 *)*puVar1;
    if (puVar4 != in_x1) {
                    /* try { // try from 007256f0 to 007256f7 has its CatchHandler @ 0072570c */
      tVar3 = std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::
              insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>
                        ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)in_x8,
                         (__wrap_iter)in_x8[1],(__wrap_iter)*puVar4,(__wrap_iter)puVar4[1]);
      param_1 = (Obstacle *)(ulong)tVar3;
    }
  }
  return param_1;
}


