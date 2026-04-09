// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rangeQuery
// Entry Point: 00725334
// Size: 160 bytes
// Signature: undefined __cdecl rangeQuery(DynamicObstacle * param_1, Vector2 * param_2, float param_3)


/* DynamicAvoidance::rangeQuery(DynamicObstacle const&, Vector2 const&, float) const */

void DynamicAvoidance::rangeQuery(DynamicObstacle *param_1,Vector2 *param_2,float param_3)

{
  long lVar1;
  type tVar2;
  ulong uVar3;
  undefined8 uVar4;
  Vector2 *in_x2;
  undefined8 *in_x8;
  ulong uVar5;
  Obstacle **ppOVar6;
  Obstacle *local_148 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = rangeQuery((DynamicAvoidance *)param_1,(DynamicObstacle *)param_2,in_x2,param_3,local_148,
                     0x20);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if ((int)uVar3 != 0) {
    uVar5 = uVar3 & 0xffffffff;
    uVar4 = 0;
    ppOVar6 = local_148;
    while( true ) {
      uVar5 = uVar5 - 1;
                    /* try { // try from 0072538c to 00725393 has its CatchHandler @ 007253d4 */
      tVar2 = std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::
              insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>
                        ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)in_x8,
                         (__wrap_iter)uVar4,(__wrap_iter)*(undefined8 *)*ppOVar6,
                         (__wrap_iter)*(undefined8 *)((long)*ppOVar6 + 8));
      uVar3 = (ulong)tVar2;
      if (uVar5 == 0) break;
      uVar4 = in_x8[1];
      ppOVar6 = ppOVar6 + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


