// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initPedestrianVisuals
// Entry Point: 00898470
// Size: 400 bytes
// Signature: undefined __thiscall initPedestrianVisuals(PedestrianSystem * this, PedestrianData * param_1, PedestrianVisuals * param_2)


/* PedestrianSystem::initPedestrianVisuals(PedestrianData*, PedestrianVisuals*) */

vector<float,std::__ndk1::allocator<float>> * __thiscall
PedestrianSystem::initPedestrianVisuals
          (PedestrianSystem *this,PedestrianData *param_1,PedestrianVisuals *param_2)

{
  long lVar1;
  type tVar2;
  long *plVar3;
  TransformGroup *pTVar4;
  ScenegraphNode *this_00;
  vector<float,std::__ndk1::allocator<float>> *this_01;
  TransformGroup *pTVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar3 = (long *)CloneUtil::cloneScenegraphNode
                             (*(ScenegraphNode **)(param_1 + 0x350),false,false,
                              (MeshSplitFileState *)0x0);
  pTVar4 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 008984b4 to 008984bf has its CatchHandler @ 00898600 */
  TransformGroup::TransformGroup(pTVar4,"PedestrianBase");
  *(TransformGroup **)(param_2 + 0x98) = pTVar4;
  (**(code **)(**(long **)(this + 0x25950) + 0x18))(*(long **)(this + 0x25950),pTVar4,0xffffffff);
  pTVar4 = *(TransformGroup **)(param_1 + 0x368);
  pTVar5 = *(TransformGroup **)plVar3[5];
  *(TransformGroup **)(param_2 + 0xa0) = pTVar5;
  CloneUtil::cloneFirstCharacterSet(pTVar4,pTVar5);
  this_00 = *(ScenegraphNode **)(plVar3[5] + 8);
  *(ScenegraphNode **)(param_2 + 0xa8) = this_00;
  ScenegraphNode::setVisibility(this_00,false);
  ScenegraphNode::setVisibility(*(ScenegraphNode **)(param_2 + 0xa0),false);
  (**(code **)(**(long **)(param_2 + 0x98) + 0x18))
            (*(long **)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0),0xffffffff);
  (**(code **)(**(long **)(param_2 + 0x98) + 0x18))
            (*(long **)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa8),0xffffffff);
  this_01 = (vector<float,std::__ndk1::allocator<float>> *)(**(code **)(*plVar3 + 8))(plVar3);
  lVar6 = *(long *)(param_2 + 0xa0);
  lVar7 = *(long *)(param_1 + 0x378);
  lVar9 = 0;
  if (*(long *)(lVar6 + 0x110) != 0) {
    lVar9 = *(long *)(lVar6 + 0x110) + -0x20;
  }
  lVar1 = *(long *)(param_1 + 0x380) - lVar7;
  *(long *)(param_2 + 0xb0) = lVar9;
  if (lVar1 != 0) {
    uVar8 = 0;
    *(long *)(param_2 + 0xc0) = lVar6;
    do {
      lVar9 = *(long *)(*(long *)(lVar6 + 0x28) + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 8);
      if (lVar9 != 0) {
        *(long *)(param_2 + 0xc0) = lVar9;
        lVar6 = lVar9;
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar1 >> 2));
  }
  lVar9 = *(long *)(param_1 + 0x370);
  if (lVar9 != 0) {
    this_01 = (vector<float,std::__ndk1::allocator<float>> *)(param_2 + 0x80);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(lVar9 + 0x48);
    if (this_01 != (vector<float,std::__ndk1::allocator<float>> *)(lVar9 + 0x30)) {
      tVar2 = std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign<float*>
                        (this_01,*(float **)(lVar9 + 0x30),*(float **)(lVar9 + 0x38));
      return (vector<float,std::__ndk1::allocator<float>> *)(ulong)tVar2;
    }
  }
  return this_01;
}


