크기가 0인 벡터 선언
std::vector<int> ver;

초기값을 지정하며, 크기가 5인 벡터 선언
std::vector<int> vec = {1,2,3,4,5};

크기가 10인 벡터 선언
std::vector<int> vec(10);

크기가 10이고, 모든 원소가 5로 초기화된 벡터 선언
std::vector<int> vec(10, 5);

# vector 원소 추가 함수
vector의 용량이 n이라면 
1. push_back([원소])
	시간복잡도: O(1)
	
2. insert([반복자] ,[원소])
	시간복잡도: O(n)
	
# vector 원소 제거 함수
vector의 용량이 n이라면 
1. pop_back([원소])
	시간복잡도: O(1)
	
2. erase()
	시간복잡도: O(n)
	overloding
	- erase([반복자])
	
	- erase([반복자(시작)], [반복자(끝)])
	
# vector 기타 함수
1. clear()
	모든 원소 제거
2. reserve(capacity)
	벡터에서 사용할 용량 지정
	벡터의 크기는 바꾸지 않는다. 
	> 단, 벡터의 크기보다 용량을 크게 지정하면 capacity크기만큼 재할당
	$ capacity의 크기가 벡터의 크기보다 작거나 같다면 동작안함
3. shrink_to_fit()
	백터의 용량이 벡터 크기와 같게됨
	> 여분 메모리 해제 