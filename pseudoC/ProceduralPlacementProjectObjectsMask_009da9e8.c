// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementProjectObjectsMask
// Entry Point: 009da9e8
// Size: 416 bytes
// Signature: undefined __thiscall ProceduralPlacementProjectObjectsMask(ProceduralPlacementProjectObjectsMask * this, set * param_1, float param_2)


/* ProceduralPlacementProjectObjectsMask::ProceduralPlacementProjectObjectsMask(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&, float) */

void __thiscall
ProceduralPlacementProjectObjectsMask::ProceduralPlacementProjectObjectsMask
          (ProceduralPlacementProjectObjectsMask *this,set *param_1,float param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  TransformGroup *pTVar4;
  void *pvVar5;
  undefined8 *this_00;
  float fVar6;
  ushort local_a0;
  void *local_90;
  ushort local_88;
  void *local_78;
  ushort local_70;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_88 = 0;
  local_a0 = 0;
                    /* try { // try from 009daa28 to 009daa37 has its CatchHandler @ 009dab94 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_70,(basic_string *)&local_88,
             (basic_string *)&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  this_00 = (undefined8 *)(this + 0xd8);
  *this_00 = this + 0xe0;
  *(undefined ***)this = &PTR__ProceduralPlacementProjectObjectsMask_00fe2630;
  *(undefined ***)(this + 200) = &PTR__IRaycastReport_00fe26d8;
  *(undefined8 *)(this + 0xd0) = 0;
  if (this_00 != (undefined8 *)param_1) {
                    /* try { // try from 009daa9c to 009daaa3 has its CatchHandler @ 009dab88 */
    std::__ndk1::
    __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>
              ((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
                *)this_00,(__tree_const_iterator)*(undefined8 *)param_1,(int)param_1 + 8);
  }
  *(float *)(this + 0xf0) = param_2;
                    /* try { // try from 009daaa8 to 009daab3 has its CatchHandler @ 009dabe4 */
  EngineManager::getInstance();
  pTVar4 = (TransformGroup *)Renderer::getRootNode();
                    /* try { // try from 009daab4 to 009daab7 has its CatchHandler @ 009dab90 */
  ProceduralPlacementManager::getTerrainNode(pTVar4);
                    /* try { // try from 009daabc to 009daac3 has its CatchHandler @ 009dab8c */
  fVar6 = (float)BaseTerrain::getUnitsPerPixel();
                    /* try { // try from 009daac8 to 009dab33 has its CatchHandler @ 009dabe8 */
  iVar2 = BaseTerrain::getHeightMapSize();
  iVar2 = (int)((fVar6 * (float)(ulong)(iVar2 - 1)) / param_2 + 0.5);
  *(int *)(this + 0x50) = iVar2;
  *(int *)(this + 0x54) = iVar2;
  iVar2 = (**(code **)(*(long *)this + 0x40))(this);
  iVar3 = (**(code **)(*(long *)this + 0x48))(this);
  pvVar5 = operator_new__((ulong)(uint)(iVar3 * iVar2) << 2);
  *(void **)(this + 0x58) = pvVar5;
  projectMesh(this,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


