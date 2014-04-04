#ifndef __ITERABLE__HPP__
#define __ITERABLE__HPP__

template<class T>
class Iterable {
protected:
	T* _data;
public:
	Iterable() {_data = new T();}
	typedef typename T::const_iterator const_iterator;
	typedef typename T::iterator iterator;
	iterator begin() {return _data->begin();}
	const_iterator begin() const {return _data->begin();}
	const_iterator cbegin() const {return _data->cbegin();}
	const_iterator cend() const {return _data->cend();}
	const_iterator constBegin() const {return _data->constBegin();}
	const_iterator constEnd() const {return _data->constEnd();}
	iterator end() {return _data->end();}
	const_iterator end() const {return _data->end();}
};


#endif