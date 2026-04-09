// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Task
// Entry Point: 008f9d30
// Size: 136 bytes
// Signature: undefined __thiscall Task(Task * this, TerrainPatchOccluderManager * param_1, RequestDesc * param_2)


/* TerrainPatchOccluderManager::Task::Task(TerrainPatchOccluderManager&,
   TerrainPatchOccluderManager::RequestDesc const&) */

void __thiscall
TerrainPatchOccluderManager::Task::Task
          (Task *this,TerrainPatchOccluderManager *param_1,RequestDesc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__Task_00fde908;
                    /* try { // try from 008f9d68 to 008f9d77 has its CatchHandler @ 008f9db8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  *(TerrainPatchOccluderManager **)(this + 0x28) = param_1;
  *(undefined ***)this = &PTR__Task_00fde8b8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)param_2;
  this[0x60] = (Task)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}


