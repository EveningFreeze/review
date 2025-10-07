#include <iostream>
#include "Elephant.h"
#include "Fridge.h"

int main() {
	std::cout << "=== 大象装进冰箱程序 ===" << std::endl;

	// 创建大象和冰箱
	Elephant elephant;
	Fridge fridge;

	// 执行三步操作
	fridge.openDoor();      // 第一步：打开冰箱门
	elephant.enterFridge(); // 第二步：大象走进冰箱
	fridge.closeDoor();     // 第三步：关闭冰箱门

	std::cout << "完成！大象已成功装进冰箱！" << std::endl;
	return 0;
}