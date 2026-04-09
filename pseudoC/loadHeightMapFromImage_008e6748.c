// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadHeightMapFromImage
// Entry Point: 008e6748
// Size: 168 bytes
// Signature: undefined __thiscall loadHeightMapFromImage(BaseTerrain * this, char * param_1)


/* BaseTerrain::loadHeightMapFromImage(char const*) */

uint __thiscall BaseTerrain::loadHeightMapFromImage(BaseTerrain *this,char *param_1)

{
  uint uVar1;
  BaseTerrain *this_00;
  long *plVar2;
  ushort **ppuVar3;
  BaseTerrainSyncer *this_01;
  
  ppuVar3 = (ushort **)(this + 0x80);
  if (*ppuVar3 != (ushort *)0x0) {
    plVar2 = *(long **)(this + 0x88);
    if (plVar2 == (long *)0x0) {
      operator_delete__(*ppuVar3);
    }
    else {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    this_01 = *(BaseTerrainSyncer **)(this + 0x170);
    *ppuVar3 = (ushort *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    if (this_01 != (BaseTerrainSyncer *)0x0) {
      BaseTerrainSyncer::~BaseTerrainSyncer(this_01);
      operator_delete(this_01);
    }
    *(undefined8 *)(this + 0x170) = 0;
  }
  this_00 = (BaseTerrain *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(this + 0xc0));
  uVar1 = loadHeightMapFromImage
                    (this_00,param_1,ppuVar3,(uint *)(this + 0x90),(uint *)(this + 0x9c),
                     (uint *)(this + 0x98));
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(this + 0x88) = 0;
  }
  return uVar1 & 1;
}


