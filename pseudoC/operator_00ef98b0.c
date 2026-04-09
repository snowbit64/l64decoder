// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator[]
// Entry Point: 00ef98b0
// Size: 360 bytes
// Signature: undefined __thiscall operator[](DenseHashMap<Luau::BytecodeBuilder::TableShape,int,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>> * this, TableShape * param_1)


/* Luau::DenseHashMap<Luau::BytecodeBuilder::TableShape, int, Luau::BytecodeBuilder::TableShapeHash,
   std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>
   >::operator[](Luau::BytecodeBuilder::TableShape const&) */

long __thiscall
Luau::
DenseHashMap<Luau::BytecodeBuilder::TableShape,int,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
::operator[](DenseHashMap<Luau::BytecodeBuilder::TableShape,int,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
             *this,TableShape *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *__s1;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar7 = *(long *)(this + 8);
  if ((ulong)(lVar7 * 3) >> 2 <= *(ulong *)(this + 0x10)) {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
    ::rehash();
    lVar7 = *(long *)(this + 8);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar6 = 0x811c9dc5;
  uVar10 = (ulong)uVar1;
  puVar8 = (uint *)param_1;
  if (uVar1 != 0) {
    do {
      uVar10 = uVar10 - 1;
      uVar6 = (ulong)((*puVar8 ^ (uint)uVar6) * 0x1000193);
      puVar8 = puVar8 + 1;
    } while (uVar10 != 0);
  }
  uVar2 = *(uint *)(this + 0x98);
  uVar10 = 0;
  lVar9 = *(long *)this;
  do {
    uVar6 = uVar6 & lVar7 - 1U;
    __s1 = (undefined8 *)(lVar9 + uVar6 * 0x88);
    uVar3 = *(uint *)(__s1 + 0x10);
    if ((uVar3 == uVar2) && (iVar5 = memcmp(__s1,this + 0x18,(ulong)uVar2 << 2), iVar5 == 0)) {
      uVar11 = *(undefined8 *)param_1;
      __s1[1] = *(undefined8 *)(param_1 + 8);
      *__s1 = uVar11;
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar17 = *(undefined8 *)(param_1 + 0x18);
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      __s1[7] = *(undefined8 *)(param_1 + 0x38);
      __s1[6] = uVar13;
      __s1[9] = uVar12;
      __s1[8] = uVar11;
      __s1[3] = uVar17;
      __s1[2] = uVar16;
      __s1[5] = uVar15;
      __s1[4] = uVar14;
      uVar13 = *(undefined8 *)(param_1 + 0x60);
      uVar12 = *(undefined8 *)(param_1 + 0x78);
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      uVar15 = *(undefined8 *)(param_1 + 0x58);
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      __s1[0xd] = *(undefined8 *)(param_1 + 0x68);
      __s1[0xc] = uVar13;
      __s1[0xf] = uVar12;
      __s1[0xe] = uVar11;
      *(undefined4 *)(__s1 + 0x10) = uVar4;
      __s1[0xb] = uVar15;
      __s1[10] = uVar14;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
      goto LAB_00ef99f4;
    }
    if ((uVar3 == uVar1) && (iVar5 = memcmp(__s1,param_1,(ulong)uVar1 << 2), iVar5 == 0))
    goto LAB_00ef99f4;
    uVar10 = uVar10 + 1;
    uVar6 = uVar10 + uVar6;
  } while (uVar10 <= lVar7 - 1U);
  __s1 = (undefined8 *)0x0;
LAB_00ef99f4:
  return (long)__s1 + 0x84;
}


