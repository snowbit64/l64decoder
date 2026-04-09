// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignLicensePlate
// Entry Point: 00719954
// Size: 332 bytes
// Signature: undefined __thiscall assignLicensePlate(TrafficSystem * this, TransformGroup * param_1, basic_string * param_2, basic_string * param_3)


/* TrafficSystem::assignLicensePlate(TransformGroup*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
TrafficSystem::assignLicensePlate
          (TrafficSystem *this,TransformGroup *param_1,basic_string *param_2,basic_string *param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  
  lVar9 = *(long *)(this + 0x78);
  if ((lVar9 != 0) && ((int)((ulong)(*(long *)(lVar9 + 0x30) - *(long *)(lVar9 + 0x28)) >> 3) != 0))
  {
    bVar2 = *(byte *)param_2;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 2);
    }
    if (uVar1 != 0) {
      uVar1 = (ulong)(*(byte *)param_3 >> 1);
      if ((*(byte *)param_3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 2);
      }
      if (uVar1 != 0) {
        pcVar8 = *(char **)(param_2 + 4);
        if ((bVar2 & 1) == 0) {
          pcVar8 = (char *)((long)param_2 + 1);
        }
        plVar4 = (long *)Node::getNodeFromReference((Node *)param_1,pcVar8);
        pcVar8 = *(char **)(param_3 + 4);
        if ((*(byte *)param_3 & 1) == 0) {
          pcVar8 = (char *)((long)param_3 + 1);
        }
        plVar5 = (long *)Node::getNodeFromReference((Node *)param_1,pcVar8);
        if ((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) {
          uVar3 = 0;
          uVar7 = (uint)((ulong)(*(long *)(lVar9 + 0x30) - *(long *)(lVar9 + 0x28)) >> 3);
          if (uVar7 != 0) {
            uVar3 = (*(int *)(this + 0x90) + 1U) / uVar7;
          }
          uVar3 = (*(int *)(this + 0x90) + 1U) - uVar3 * uVar7;
          lVar9 = *(long *)(*(long *)(lVar9 + 0x28) + (ulong)uVar3 * 8);
          *(uint *)(this + 0x90) = uVar3;
          if ((int)((ulong)(*(long *)(lVar9 + 0x30) - (long)*(ScenegraphNode ***)(lVar9 + 0x28)) >>
                   3) == 2) {
            uVar6 = CloneUtil::cloneScenegraphNode
                              (**(ScenegraphNode ***)(lVar9 + 0x28),false,false,
                               (MeshSplitFileState *)0x0);
            (**(code **)(*plVar4 + 0x18))(plVar4,uVar6,0xffffffff);
            uVar6 = CloneUtil::cloneScenegraphNode
                              (*(ScenegraphNode **)(*(long *)(lVar9 + 0x28) + 8),false,false,
                               (MeshSplitFileState *)0x0);
            (**(code **)(*plVar5 + 0x18))(plVar5,uVar6,0xffffffff);
          }
        }
      }
    }
  }
  return;
}


