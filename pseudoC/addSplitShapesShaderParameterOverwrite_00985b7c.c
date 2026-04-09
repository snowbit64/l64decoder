// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSplitShapesShaderParameterOverwrite
// Entry Point: 00985b7c
// Size: 420 bytes
// Signature: undefined __thiscall addSplitShapesShaderParameterOverwrite(MeshSplitManager * this, char * param_1, uint param_2, float * param_3)


/* MeshSplitManager::addSplitShapesShaderParameterOverwrite(char const*, unsigned int, float*) */

void __thiscall
MeshSplitManager::addSplitShapesShaderParameterOverwrite
          (MeshSplitManager *this,char *param_1,uint param_2,float *param_3)

{
  size_t sVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (long *)(this + 0x88);
  puVar7 = (undefined8 *)*this_00;
  puVar9 = *(undefined8 **)(this + 0x90);
  if (puVar9 != puVar7) {
    uVar10 = 0;
    do {
      puVar8 = puVar7 + uVar10 * 6;
      sVar4 = strlen(param_1);
      sVar1 = (ulong)(*(byte *)puVar8 >> 1);
      if ((*(byte *)puVar8 & 1) != 0) {
        sVar1 = puVar8[1];
      }
      if (sVar4 == sVar1) {
                    /* try { // try from 00985c24 to 00985c37 has its CatchHandler @ 00985d3c */
        iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)puVar8,0,(char *)0xffffffffffffffff,(ulong)param_1);
        if (iVar3 == 0) {
          lVar6 = *this_00 + uVar10 * 0x30;
          *(uint *)(lVar6 + 0x18) = param_2;
          uVar11 = *(undefined8 *)param_3;
          *(undefined8 *)(lVar6 + 0x24) = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)(lVar6 + 0x1c) = uVar11;
          goto LAB_00985cec;
        }
        puVar7 = *(undefined8 **)(this + 0x88);
        puVar9 = *(undefined8 **)(this + 0x90);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      uVar5 = ((long)puVar9 - (long)puVar7 >> 4) * -0x5555555555555555;
    } while (uVar10 <= uVar5 && uVar5 - uVar10 != 0);
  }
  uStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (puVar9 < *(undefined8 **)(this + 0x98)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    *(undefined8 **)(this + 0x90) = puVar9 + 6;
  }
  else {
                    /* try { // try from 00985cac to 00985cb7 has its CatchHandler @ 00985d20 */
    std::__ndk1::
    vector<MeshSplitManager::ShaderParameterOverwrite,std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>>
    ::__push_back_slow_path<MeshSplitManager::ShaderParameterOverwrite>
              ((vector<MeshSplitManager::ShaderParameterOverwrite,std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>>
                *)this_00,(ShaderParameterOverwrite *)&local_a0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  lVar6 = *(long *)(this + 0x90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(lVar6 + -0x30));
  *(uint *)(lVar6 + -0x18) = param_2;
  uVar11 = *(undefined8 *)param_3;
  *(undefined8 *)(lVar6 + -0xc) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar6 + -0x14) = uVar11;
LAB_00985cec:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


