/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:35:49 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 16:37:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr) {

	uintptr_t serializeDataPtr;

	serializeDataPtr = reinterpret_cast<uintptr_t>(ptr);
	return (serializeDataPtr);
}

Data	*deserialize(uintptr_t raw) {

	Data	*deserializeDataPtr;

	deserializeDataPtr = reinterpret_cast<Data *>(raw);
	return (deserializeDataPtr);
}
