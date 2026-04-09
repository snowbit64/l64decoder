// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setObjectType
// Entry Point: 009e5a78
// Size: 320 bytes
// Signature: undefined __thiscall setObjectType(ProceduralPlacementRule * this, uint param_1, basic_string * param_2)


/* ProceduralPlacementRule::setObjectType(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementRule::setObjectType
          (ProceduralPlacementRule *this,uint param_1,basic_string *param_2)

{
  ProceduralPlacementManager *pPVar1;
  long lVar2;
  long lVar3;
  ProceduralPlacementFoliageObjectDesc *this_00;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(this + 0x68) + (ulong)param_1 * 8);
  pPVar1 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  lVar2 = ProceduralPlacementManager::getFoliageObjectByName(pPVar1,param_2);
  pPVar1 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  lVar3 = ProceduralPlacementManager::getReferenceObjectByName(pPVar1,param_2);
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      this_00 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0x78);
                    /* try { // try from 009e5b70 to 009e5b7b has its CatchHandler @ 009e5bb8 */
      ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc
                ((ProceduralPlacementTextureObjectDesc *)this_00,*(uint *)(lVar5 + 0x28),
                 (basic_string *)(lVar5 + 0x30),param_2,*(uint *)(lVar5 + 0x60),
                 *(uint *)(lVar5 + 100),*(uint *)(lVar5 + 0x68),*(uint *)(lVar5 + 0x6c),
                 *(int *)(lVar5 + 8));
    }
    else {
      this_00 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0x98);
                    /* try { // try from 009e5b34 to 009e5b4b has its CatchHandler @ 009e5bbc */
      ProceduralPlacementReferenceObjectDesc::ProceduralPlacementReferenceObjectDesc
                ((ProceduralPlacementReferenceObjectDesc *)this_00,*(uint *)(lVar5 + 0x28),
                 (basic_string *)(lVar5 + 0x30),param_2,*(uint *)(lVar5 + 0x60),
                 *(uint *)(lVar5 + 100),*(uint *)(lVar5 + 0x68),*(uint *)(lVar5 + 0x6c),
                 (basic_string *)(lVar3 + 0x18),1.0,1.0,*(int *)(lVar5 + 8));
    }
  }
  else {
    this_00 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0xa8);
                    /* try { // try from 009e5af0 to 009e5b03 has its CatchHandler @ 009e5bc0 */
    ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc
              (this_00,*(uint *)(lVar5 + 0x28),(basic_string *)(lVar5 + 0x30),param_2,
               *(uint *)(lVar5 + 0x60),*(uint *)(lVar5 + 100),*(uint *)(lVar5 + 0x68),
               *(uint *)(lVar5 + 0x6c),(basic_string *)(lVar2 + 0x18),*(uint *)(lVar2 + 0x30),
               *(int *)(lVar5 + 8));
  }
  lVar2 = *(long *)(this + 0x68);
  plVar4 = *(long **)(lVar2 + (ulong)param_1 * 8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    lVar2 = *(long *)(this + 0x68);
  }
  *(ProceduralPlacementFoliageObjectDesc **)(lVar2 + (ulong)param_1 * 8) = this_00;
  return;
}


